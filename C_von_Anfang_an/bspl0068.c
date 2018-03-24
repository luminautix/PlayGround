/* bsp10068.c */
#include <stdio.h>

main(){
    FILE *datei_ptr; /* ein Zeiger wird deklariert, Typ ist FILE */
    datei_ptr = fopen("abc.xyz", "w"); /* öffnen der Datei, speichern des Zeiger in 'datei_ptr' */
    if(datei_ptr != NULL){
        fclose(datei_ptr);
    }
}
