/* bsp10075.c */
#include <stdio.h>

main(){

    FILE *stream;
    /* Dateistream erstellen */
    stream = fopen("bsp10075TestDatei", "w");
    /* Wenn Dateistream gültig, kann er jetzt geschlossen werden - die Datei ist erstellt */
    if(stream == NULL)
        fclose(stream);


    if(remove("bsp10075TestDatei") == -1)
        perror("Fehler beim Loeschen");
    else
        printf("Datei geloescht!");

}
