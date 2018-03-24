/* bsp10064.c */
#include <stdio.h>

main(){
    int x = 2001;
    int *ptr;
    ptr = &x;
    printf("\nWert von ptr = %u", ptr);
    printf(" - %i", *ptr);
    ptr++;
    printf("\nWert von ptr = %u", ptr);
        printf(" - %i", *ptr);
    ptr++;
    printf("\nWert von ptr = %u", ptr);
        printf(" - %i", *ptr);
}
