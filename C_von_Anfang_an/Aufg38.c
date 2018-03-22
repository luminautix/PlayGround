/* Aufg38.c */
#include <stdio.h>

int zahl = 0; /* globale Variable */

void zaehlen(){
    zahl++;
}

main(){
    int i;
    for(i=1; i<=12; i++){
        zaehlen();
    }
    printf("\nDie Variable 'zahl' hat den Wert %i", zahl);
}
