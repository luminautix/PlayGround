/* bsp10043.c */
#include <stdio.h>
#include <string.h>

main(){
    /* Diese Programm arbeite nicht wie erwartet! */
    unsigned char text[80]; /* standardm��ig 'signed' */
    int i;
    strcpy(text, "standardm�ssig");
    for(i=0; i<strlen(text); i++){
        if (text[i] == '�')
            printf("\ngefunden !");
        else
            printf("\nnicht gefunden !");
    }
}
