/* bsp10041.c */
#include <stdio.h>
#include <string.h>

main(){
    int ergebnis, zahl;
    char eingabe[80];

    printf("\nBitte eine Ganzzahl eingeben: ");
    gets(eingabe);

    ergebnis = atoi(eingabe);
    // Wird hier 'char eingabe' in den %i StringPlatzhalter eingesetzt, wird eine mehrstellige Zahl angezeigt
    printf("Der Wert ist %i\n", ergebnis);

    printf("\nBitte eine Ganzzahl eingeben: ");
    scanf("%i", &zahl);

    sprintf(eingabe, "%i", zahl);
    // Wird hier 'int zahl' in den String eingearbeitet, crasht das Programm
    printf("Der String lautet %s\n", eingabe);
}
