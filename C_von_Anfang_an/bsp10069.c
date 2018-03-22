/* bsp10069.c */
#include <stdio.h>

main(){
    FILE *datei_ptr; /* ein Zeiger wird deklariert, Typ ist FILE */
    char datei[67];
    printf("\nName der zu oeffnenden Datei: > ");
    gets(datei);
    datei_ptr = fopen(datei, "r");
    if(datei_ptr != NULL){
        printf("\nDatei %s wurde geoeffnet!\n", datei);
        fclose(datei_ptr);
    } else {
        printf("\n\'%s\' laesst sich nicht oeffnen!\n", datei);
    }
}
