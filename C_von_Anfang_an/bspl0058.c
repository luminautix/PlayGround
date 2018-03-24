/* bsp10058.c */
#include <stdio.h>

#define zeige(a) printf("\nInhalt von %s: %i", #a, a)

main(){
    int x =47, y = 11;
    zeige(x);
    zeige(y);
}
