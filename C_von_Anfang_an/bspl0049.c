/* bsp10049.c */
#include <stdio.h>

#define TITEL "\n\t\tHerzschlaege\n"
#define MELDUNG1 "\nHerzschlaege pro Minute     :"
#define MELDUNG2 "\nAlter in Jahren             :"
#define MELDUNG3 "\nHerzschlaege seit der Geburt:"
#define SCHLAEGE 72.0
#define ALTER 33.0

main(){
    printf(TITEL);
    printf("%s %.0f", MELDUNG1, SCHLAEGE);
    printf("%s %.0f", MELDUNG2, ALTER);
    printf(MELDUNG3);
    printf(" %.0f", SCHLAEGE * 60 * 24 * 365.25 * ALTER);

}
