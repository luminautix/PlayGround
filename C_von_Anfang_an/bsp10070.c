/* bsp10070.c */
#include <stdio.h>

main(){
    FILE *datei_ptr; /* ein Zeiger wird deklariert, Typ ist FILE */
    char *datei = "abc.xyz";

    datei_ptr = fopen(datei, "r"); /* öffnen der Datei, speichern des Zeiger in 'datei_ptr' */

    if(datei_ptr != NULL){
            printf("\nDatei %s wurde geoeffnet!", datei);
        fclose(datei_ptr);
    } else {
        printf("\nDatei %s existiert nicht!\n", datei);
    }
}
