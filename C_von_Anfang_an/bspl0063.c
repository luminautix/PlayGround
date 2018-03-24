/* bsp10063.c */
#include <stdio.h>

void tausche(int *eins, int *zwei){
    int hilf;
    hilf = *eins;
    printf("\nx = %i    y = %i    hilf = %i", *eins,*zwei,hilf);
    *eins = *zwei;
    *zwei = hilf;
    printf("\nx = %i    y = %i    hilf = %i", *eins,*zwei,hilf);
}

main(){
    int x = 17, y = 31;
    printf("\nx = %i    y = %i", x,y);
    tausche(&x,&y);
    printf("\nx = %i    y = %i", x,y);
}
