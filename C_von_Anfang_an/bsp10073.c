/* bsp10073.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    FILE *stream;
    char zeile[81];
    char dateiname[67];
    int zeilen = 0;

    printf("\n\t\tTextzeilen erfassen\n");
    printf("\nSpeichern unter >");
    gets(dateiname);

    if((stream = fopen(dateiname, "a")) == NULL){
        /* Wenn die Datei nicht geoeffnet werden kann, ist stream gleich NULL und das Programm wird verlassen */
        printf("\nFehler beim Oeffnen!");
        exit(1);
    }

    printf("\nLeerzeile beendet das Programm.");
    printf("\n-------------------------------\n");

    gets(zeile);
    while(strlen(zeile) > 0){
        fprintf(stream, "%s\n", zeile);
        zeilen++;
        gets(zeile);
    }
    fclose(stream);

    printf("\n%i Zeilen wurden geschrieben.\n", zeilen);
}
