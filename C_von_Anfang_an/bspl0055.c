/* bsp10055.c 32.c */
#include <stdio.h>

#define MAX(a, b)(((a) > (b)) ? (a) : (b)) // Achtung bei nicht geklammerten Leerzeichen
#define MIN(a, b)(((a) < (b)) ? (a) : (b)) // Achtung bei nicht geklammerten Leerzeichen

main(){
    int zahl1, zahl2;
    printf("\nBitte geben Sie eine Zahl ein: ");
    scanf("%i", &zahl1);
    printf("Bitte geben Sie eine Zahl ein: ");
    scanf("%i", &zahl2);
    printf("\nDie Zahl %i ist die groessere!", MAX(zahl1, zahl2));
    printf("\nDie Zahl %i ist die kleinere!", MIN(zahl1, zahl2));
}
