/* bsp10075.c */
#include <stdio.h>

main(){

    FILE *stream;
    /* Dateistream erstellen */
    stream = fopen("bsp10076TestDatei", "w");
    /* Wenn Dateistream g�ltig, kann er jetzt geschlossen werden - die Datei ist erstellt */
    if(stream == NULL)
        fclose(stream);


    if(rename("bsp10076TestDatei", "bsp10076Umbenannt") != 0)
        perror("Fehler beim Umbenennen");
    else
        printf("Datei umbenannt!");

}
