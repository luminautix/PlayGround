/* bsp10072.c */
#include <stdio.h>
#include <stdlib.h>

main(){
    FILE *stream;
    char dateiname[67];
    int ch;
    printf("\nWelche Datei wollen Sie lesen? >");
    gets(dateiname);

    if((stream = fopen(dateiname, "r")) == NULL){ /* Von der inneren Klammer zur aeusseren,  */
        printf("\nFehler beim Oeffnen!");
        exit(1);
    }

    ch = fgetc(stream);
    while(!feof(stream)){
        putchar(ch);
        ch = fgetc(stream);
    }

    fclose(stream);
}
