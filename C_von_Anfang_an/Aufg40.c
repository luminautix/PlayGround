/* Aufg40.c */
#include <stdio.h>

#define SPACE ' '       /* Leerstelle */
#define NL '\n'         /* neue Zeile */
#define BINULL '\0'     /* binäre Null */
#define MAX_LANG 80     /* Länge der Zeichenkette 'text' */

char text[MAX_LANG];

void eingeben(){
    printf("\nText eingeben>\n");
    gets(text);
}

void tauschen(){
    int x = 0;
    while(text[x] != BINULL){
        if(text[x] == SPACE)
            text[x] = NL;
        x++;
    }
}

void ausgeben(){
    printf("%s", text);
}

main(){
    eingeben();
    tauschen();
    ausgeben();
}
