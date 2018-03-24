/* bsp10066.c */
#include <stdio.h>
#include <stdlib.h>

main(int argc, char *argv[]){
    int i;
    if(argc < 2){ /*Fehlen Parameter?*/
        printf("\nKommandozeilen-Parameter fehlen!");
        exit(1);
    }
    for(i = 0; i <= argc; i++){
        printf("\nParameter %i: %s", i, argv[i]);
    }
    printf("\n");
}
