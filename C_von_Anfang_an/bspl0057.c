/* bsp10057.c */
#include <stdio.h>

linie(int zeichen, int laenge){
    int i;
    for(i = 1; i <= laenge; i++)
        printf("%c", zeichen);
}

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

    /* jetzt wird die Präprozessoranweisung/ das Makro gelöscht, es existiert jetzt nur noch die Funktion */
    #undef linie
    printf("\n");
    linie(zeichen,wieoft);
}
