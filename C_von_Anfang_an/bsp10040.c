/* bsp10040.c */
#include <stdio.h>
#include <string.h>

main(){
    char geheim[10], passwort[80];
    int versuch = 3;

    geheim[3] = 'p';            // p
    geheim[2] = 109;            // m
    geheim[7] = 114;            // r
    geheim[5] = 116;            // t
    geheim[0] = 67;             // C
    geheim[9] = 'x';            // x
    geheim[1] = 111;            // o
    geheim[8] = '\0';           // NULL
    geheim[4] = geheim[1] + 6;  // u
    geheim[6] = 101;            // e

    // Computer


    printf("\nSie haben 3 Versuche.\n");
    do {
        printf("\nBitte Passwort eingeben.\n");
        gets(passwort);
        if (strcmp(geheim, passwort) == 0){
            printf("\nPasswort ok!\n");
            break;
        }
    else
        printf("\nFehlerhaftes Passwort!\n\a");
    versuch--;
    }
    while(versuch > 0);
}
