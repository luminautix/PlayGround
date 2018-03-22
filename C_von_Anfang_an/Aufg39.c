/* Aufg38.c */
#include <stdio.h>

int naechste_zahl(){
    static int zahl = 10;
    if (zahl > 12)
        zahl = 10;
    zahl++;
    return zahl;
}

main(){
    int x = 1;
    while (x < 10) {
        printf("%4i", naechste_zahl());
        x++;
    }
}

int
