/* bsp10051.c */
#include <stdio.h>

main(){
    printf("\nProgramm beginnt in Zeile %i", __LINE__);
    printf("\nOriginalprogrammname: %s", __FILE__);
    printf("\nUebersetzt am %s", __DATE__);
    printf(" um %s Uhr." , __TIME__);
}
