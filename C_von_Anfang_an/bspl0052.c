/* bsp10052.c */
#include <stdio.h>

#define DEMO 1
#define BETA 0

main(){
    #if DEMO && BETA
        printf("Demofassung der Betaversion\n");
    #elif DEMO && !BETA
        printf("Demofassung\n");
    #elif !DEMO && BETA
        printf("Betaversion\n");
    #else
        printf("Release\n");
    #endif
}
