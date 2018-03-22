/* bsp10059.c */
#include <stdio.h>

#define makejahr(a,b)a##b
#define init(a,b)a##b=a*100+b

main(){
    int jahrhundertjahr;
    int jahrhundert = 19;
    int jahr = 99;
    init(jahrhundert, jahr);
    printf("Das Jahr lautet %i", makejahr(jahrhundert,jahr));
}
