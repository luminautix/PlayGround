/* bsp10067.c */
#include <stdio.h>
#include <stdlib.h>

main(int argc, char *argv[]){
    double x, y, z;
    if(argc < 4){ /*Fehlen Parameter?*/
        printf("\nAufruf: %s zahl1 op zahl2\n\n", argv[0]);
        exit(1);
    }

    x = atof(argv[1]);
    y = atof(argv[3]);
    switch(argv[2][0]){
        case '+':
            z = x + y;
            break;
        case '-':
            z = x - y;
            break;
        case '*': /* Funktioniert nicht, warum, keine Ahnung !!! */
        case 'x':
            z = x * y;
            break;
        case '/':
        case ':':
            z = x / y;
            break;
        default:
            printf("\nFalsches Operatorzeichen!\n\n");
            exit(2);
    }
    printf("%s %s %s = %f\n\n", argv[1], argv[2], argv[3], z);
}
