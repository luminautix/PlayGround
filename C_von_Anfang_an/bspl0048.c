/* bsp10048.c */
#include <stdio.h>
#include "bspl0048.h"

main(){
    double x = 4711.0, y = 11.0;
    printf("\nErgebnis = %f", func(x,y));
}

double func(double x, double y){
    return(y/x);
}
