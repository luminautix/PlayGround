/* bsp10071.c */
#include <stdio.h>

int file_exists(char *); // das ist ein Prototyp

main(){
    if(file_exists("abc.xyz"))
        printf("\nDatei ist vorhanden.\n");
    else
        printf("\nDatei fehlt.\n");
}

int file_exists(char *dateiname){
    FILE *datei_ptr;
    int result;
    datei_ptr = fopen(dateiname, "r");
    if(datei_ptr != NULL){
        result = -1;
        fclose(datei_ptr);
    } else {
        result = 0;
    }
    return result;
}
