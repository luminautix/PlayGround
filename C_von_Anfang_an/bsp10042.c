/* bsp10042.c */
#include <stdio.h>
#include <limits.h>
#include <float.h>

main(){
    printf("\nTyp\tGroesse\tMinimalwert\tMaximalwert\n");
    printf("\n%s\t%u\t%i\t%i", "char", sizeof(char),CHAR_MIN, CHAR_MAX);
    printf("\n%s\t%u\t%u\t%u", "unsigned char", sizeof(unsigned char), 0, UCHAR_MAX);
    printf("\n%s\t%u\t%i\t%i", "signed char", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
    printf("\n");
    printf("\n%s\t%u\t%i\t%i", "int", sizeof(int), INT_MIN, INT_MAX);
    printf("\n%s\t%u\t%u\t%u", "unsigned int", sizeof(unsigned int), 0, UINT_MAX);
    printf("\n%s\t%u\t%i\t%i", "signed int", sizeof(signed int), INT_MIN, INT_MAX);
    printf("\n%s\t%u\t%i\t%i", "short int", sizeof(short int), SHRT_MIN, SHRT_MAX);
    printf("\n%s\t%u\t%u\t%u", "unsigned short int", sizeof(unsigned short int), 0, USHRT_MAX);
    printf("\n%s\t%u\t%i\t%i", "signed short int", sizeof(signed short int), SHRT_MIN, SHRT_MAX);
    printf("\n%s\t%u\t%li\t%li", "long int", sizeof(long int), LONG_MIN, LONG_MAX);
    printf("\n%s\t%u\t%lu\t%lu", "unsigned long int", sizeof(unsigned long int), 0, ULONG_MAX);
    printf("\n%s\t%u\t%li\t%li", "signed long int", sizeof(signed long int), LONG_MIN, LONG_MAX);
    printf("\n");
    printf("\n%s\t%u\t%G\t%G", "float", sizeof(float), FLT_MIN, FLT_MAX);
    printf("\n%s\t%u\t%G\t%G", "double", sizeof(double), DBL_MIN, DBL_MAX);
    printf("\n%s\t%u\t%LG\t%LG", "long double", sizeof(long double), LDBL_MIN, LDBL_MAX);
    printf("\n");
}
