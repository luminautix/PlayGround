/* bsp10050.c */
#include <stdio.h>

#define TRUE 1
#define FALSE 0

main(){
    int weiter = TRUE;
    int zaehler = 0;
    while(weiter){
        printf("%3i", zaehler);
        zaehler++;
        if(zaehler > 100)
            weiter = FALSE;
    }
}
