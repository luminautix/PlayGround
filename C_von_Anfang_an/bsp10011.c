/* bsp10011.c */
#include <stdio.h>

main(){
    int x, y, z;
    printf("\nZ a h l e n v e r g l e i c h \n");
    printf("\nBitte x eingeben: ");
    scanf("%i", &x);
    printf("\nBitte y eingeben: ");
    scanf("%i", &y);
    printf("\nBitte z eingeben: ");
    scanf("%i", &z);
    printf("\nDie groessere Zahl lautet %i",
           (x > y)
                ?
                (z > x) ? z : x //ternäre Ausdrücke
                :
                (z > y) ? z : y );
}
