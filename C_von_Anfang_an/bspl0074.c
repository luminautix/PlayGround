/***********************************************************
*   bsp10074.c                                             *
*----------------------------------------------------------*
* Aufgabe : Formatierter Druck von Textdateien             *
*----------------------------------------------------------*
* Autor : Erlenkötter                                      *
* Stand : 28.05.99                                         *
*----------------------------------------------------------*
* Compiler : <hier soll ich Compiler-Optionen hinterlegen> *
************************************************************/

/*---------- include files --------------------------------*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*---------- define ---------------------------------------*/
#define SEITENLAENGE 65
/* PCL-Steuerzeichen für Schmalschrift */
#define SCHMAL "1B2873313648"
/* Steuerzeichen für normale Schrift */
#define NEUE_SEITE "0c"
/* PCL-Steuerzeichen für normale Schrift */
#define NORMAL "1B2873313248"
/* maximale Zeilenlänge */
#define MAX_EINGABE 200

FILE *text;  /* Druckausgabe */

/**************************************************
*  Funktion   : l e f t _ m a r g i n             *
*-------------------------------------------------*
*  Aufgabe    : Leerzeichen für Zeilenanfang      *
*  Parameter  : Anzahl der Leerstellen            *
*  Returnwert : keiner                            *
**************************************************/

void left_margin(int rand){
    while(rand-- > 0)
        fprintf(text, "%c", 32);  /* 32 = ASCII-Code für Leerzeichen */
}

/**************************************************
*  Funktion   : K o p f z e i l e                 *
*-------------------------------------------------*
*  Aufgabe    : Kopfzeilenausgabe einer Liste     *
*  Parameter  : Name der zu druckenden Datei      *
*             : Abstand vom linken Rand           *
*  Returnwert : keiner                            *
**************************************************/

void kopfzeile(char *dateiname, int linker_rand){
    static int seite = 1;
    fprintf(text, "\n");  /* 1 Leerzeile vor Druckbeginn */
    left_margin(linker_rand);
    fprintf(text, "<<< Seite %3i >> von %s\n\n", seite++, dateiname);
}

/**************************************************
*  Funktion   : S t e u e r z e i c h e n         *
*-------------------------------------------------*
*  Aufgabe    : Steuerzeichen an Drucker senden   *
*  Parameter  : Escapesequenz                     *
*  Returnwert : keiner                            *
**************************************************/

void steuerzeichen(char *seq) {
    char wert;
    while(*seq){                    /* Lies die gesamte Steuersequenz */
        sscanf(seq, "%2x", &wert);  /* Hole jeweils 2 Zeiche */
        fprintf(text, "%c", wert);
        seq += 2;
    }
}

/* --------------- Hauptprogramm ------------------ */

main(){
    FILE *stream;
    char dateiname[67]; /* zu druckende Datei */
    int zeile = 0; /* aktuelle Druckzeile */
    int linker_rand = 10; /* linke Randgröße */
    char schmal = 'J'; /* Schmalschrift J/N */
    char eingabe[MAX_EINGABE]; /* Dialogzeile */

    printf("\n\t\t<<< Formatierter Druck >>>");
    printf("\n\n<RETURN> beendet das Programm.\n");

    /*--------- Dateiname einlesen und öffnen */
    printf(("\nWelche Datei drucken?\n>"));
    gets(dateiname);
    if(strlen(dateiname) == 0)
        exit(0);
    while((stream = fopen(dateiname, "r")) == NULL){
        printf("'%s' nicht gefunden!\a\n", dateiname);
        printf(("\nWelche Datei drucken?\n>"));
        gets(dateiname);
        if(strlen(dateiname) == 0)
            exit(0);
    }

    /*--------- Druckparameter einlesen */
    printf("\n<RETURN> uebernimmt die Vorgaben.\n");
    printf("\nLinker Rand (%i): >", linker_rand);
    gets(eingabe);
    if(strlen(eingabe) != 0)
        linker_rand = atoi(eingabe);
    printf("\nSchmalschrift J/N (%c): >", schmal);
    gets(eingabe);
    if(strlen(eingabe) != 0){
        if(eingabe[0] == 'N' || eingabe[0] == 'n')
            schmal = 'N';
    }

    /*------- Druckausgabe oeffnen */
    text = fopen("LPT1:", "a");
    if (text == NULL){
        printf("Fehler beim Oeffnen von LPT1");
        exit(1);
    }

    /* ----------- Schriftart einstellen */
    if(schmal == 'J')
        steuerzeichen(SCHMAL);
    else
        steuerzeichen(NORMAL);

    /* --------------- Liste drucken */
    kopfzeile(dateiname, linker_rand);
    while(fgets(eingabe, MAX_EINGABE, stream) != NULL){
        left_margin(linker_rand);
        fprintf(text, "%s", eingabe);
        if(++zeile > SEITENLAENGE - 10){
            steuerzeichen(NEUE_SEITE);
            kopfzeile(dateiname, linker_rand);
            zeile = 0;
        }
    }
    steuerzeichen(NEUE_SEITE);

    /* ------- Datei schließen */
    fclose(stream);

    printf("\nDruck beendet!\a\n");
}



























