/* bsp10046.c */
#include <stdio.h>


int zaehlen(){
    static int zahl = 0;
    zahl++;
    return zahl;
}

main(){
    int i, ergebnis;
    for(i=1; i<=12; i++){
        ergebnis = zaehlen();
    }
    printf("\nDie Variable 'zahl' hat den Wert %i", ergebnis);
}
