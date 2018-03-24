/* bsp10056.c */
#include <stdio.h>

#define linie(a,b) {int i; \
                    for(i = 1; i<= b; i++) printf("%c",a);}

main(){
    int zeichen, wieoft;
    printf("\nIch schreibe jetzt 10 Fragezeichen.\n");
    linie('?',10);
    printf("\nWelches Zeichen: ");
    zeichen = getchar();
    printf("Wie oft schreiben: ");
    scanf("%i", &wieoft);
    printf("\n");
    linie(zeichen,wieoft);
}
