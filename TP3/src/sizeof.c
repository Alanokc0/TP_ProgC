#include <stdio.h>

int main() {

    printf("Taille de int       : %lu octets\n", sizeof(int));
    printf("Taille de int*      : %lu octets\n", sizeof(int*));
    printf("Taille de int**     : %lu octets\n", sizeof(int**));

    printf("\n");

    printf("Taille de char      : %lu octets\n", sizeof(char));
    printf("Taille de char*     : %lu octets\n", sizeof(char*));
    printf("Taille de char**    : %lu octets\n", sizeof(char**));
    printf("Taille de char***   : %lu octets\n", sizeof(char***));

    printf("\n");

    printf("Taille de float     : %lu octets\n", sizeof(float));
    printf("Taille de float*    : %lu octets\n", sizeof(float*));
    printf("Taille de float**   : %lu octets\n", sizeof(float**));
    printf("Taille de float***  : %lu octets\n", sizeof(float***));

    printf("\n");

    printf("Taille de double    : %lu octets\n", sizeof(double));
    printf("Taille de double*   : %lu octets\n", sizeof(double*));

    printf("\n");

    printf("Taille de long      : %lu octets\n", sizeof(long));
    printf("Taille de long*     : %lu octets\n", sizeof(long*));

    printf("\n");

    printf("Taille de long long : %lu octets\n", sizeof(long long));
    printf("Taille de long long*: %lu octets\n", sizeof(long long*));

    return 0;
}
