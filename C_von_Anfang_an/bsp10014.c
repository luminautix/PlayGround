/* bsp10014.c Diese Programm arbeitet nicht korrekt! */
#include <stdio.h>

main(){
    int x;
    printf("Bitte Zahl eingeben (Bitte keine Null eingeben): ");
    scanf("%i", &x);
    if (x > 0)
        printf("Die Zahl ist positiv.\n");
    else
        printf("Die Zahl ist negativ.\n");
}
