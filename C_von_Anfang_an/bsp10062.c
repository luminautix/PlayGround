/* bsp10062.c */
#include <stdio.h>

main(){
    int zahl;
    int *ptr;
    zahl = 88;
    ptr = &zahl;
    printf("\nDer Wert von 'zahl' ist %i", zahl);
    printf("\nDie Adresse von 'zahl' ist %u", ptr);
    printf("\nDie Groesse von 'ptr' ist %u", sizeof(ptr));
    printf("\n'ptr' zeigt auf den Wert %i", *ptr);
}
