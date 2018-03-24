/* bsp10065.c */
#include <stdio.h>

void schreibe1(char *text){
    int x = 0;
    while(text[x])
        putchar(text[x++]);
}

void schreibe2(char *text){
    while(*text)
        putchar(*text++);
}

main(){
    char text[80];
    printf("\nBitte einen Satz eingeben\n>");
    gets(text);
    schreibe1(text);
    printf("\n");
    schreibe2(text);
}
