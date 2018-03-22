/* bsp10053.c */
#include <stdio.h>

#define DEMO


main(){
    #ifdef DEMO
        #ifdef BETA
            printf("Demofassung der Betaversion\n");
        #else
            printf("Demofassung\n");
        #endif
    #elif BETA                      // Das funktioniert nicht, elif wird nicht kompiliert
        printf("Betaversion\n");
    #else
        printf("Release\n");
    #endif
}
