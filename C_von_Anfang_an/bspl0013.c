/* bsp10013.c */
#include <stdio.h>

main(){
    float temperatur;
    printf("\n\tT E M P E R A T U R R E C H N E R\n");
    printf("\nBitte Grad Celsius eingeben: ");
    scanf("%f", &temperatur);
    if (temperatur >= -273.15)
        printf("\n%2.f °C sind %.2f K", temperatur, temperatur + 273.15);
    else
        printf("\nDiese Temperatur gibt es nicht!");
}
