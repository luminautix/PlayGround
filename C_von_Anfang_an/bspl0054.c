/* bsp10054.c */
#include <stdio.h>

#define DEMO

main(){
    printf("%s", "Dieses Programm wurde");

    #ifdef __STDC__
        printf(" %s", "nach dem ANSI-Standart kompiliert.");
    #else
        printf(" %s", "nicht nach dem ANSI-Standart kompiliert.");
    #endif
}
