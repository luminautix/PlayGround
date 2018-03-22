/* bsp10015.c */
#include <stdio.h>

main(){
    int wahl;
    float betrag;
    printf("\n\tE u r o r e c h n e r\n");
    printf("\n1 DM   --> EURO\n2 EURO --> DM");
    printf("\n\nIhre Wahl: ");
    scanf("%i", &wahl);
    if (wahl == 1){
        printf("Bitte DM-Betrag eingeben: ");
        scanf("%f", &betrag);
        printf("\n%.2f DM sind %.2f EURO", betrag, betrag * 0.51129);
    }
    else if (wahl == 2){
        printf("Bitte EURO-Betrag eingeben: ");
        scanf("%f", &betrag);
        printf("\n%2.f EURO sind %.2f DM", betrag, betrag * 1.95583);
    }
    else
        printf("\nUngueltige Option\n");
}
