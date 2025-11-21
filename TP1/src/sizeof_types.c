/* types_sizes.c
   Compile: gcc -std=c11 -Wall -Wextra -O2 -o types_sizes types_sizes.c
   Run:     ./types_sizes
*/
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stddef.h>

int main(void) {
    printf("Ta machine (sizeof en octets) :\n\n");

    /* caractères */
    printf("char:                 sizeof = %zu byte(s)    (signedness: %s)\n",
           sizeof(char),
           ( (char)-1 < 0 ) ? "signed char implementation" : "unsigned char implementation or unsigned char)");
    printf("signed char:          sizeof = %zu byte(s)\n", sizeof(signed char));
    printf("unsigned char:        sizeof = %zu byte(s)\n\n", sizeof(unsigned char));

    /* entiers courts et longs */
    printf("short:                sizeof = %zu byte(s)\n", sizeof(short));
    printf("unsigned short:       sizeof = %zu byte(s)\n\n", sizeof(unsigned short));

    printf("int:                  sizeof = %zu byte(s)\n", sizeof(int));
    printf("unsigned int:         sizeof = %zu byte(s)\n\n", sizeof(unsigned int));

    printf("long:                 sizeof = %zu byte(s)\n", sizeof(long));
    printf("unsigned long:        sizeof = %zu byte(s)\n\n", sizeof(unsigned long));

    printf("long long:            sizeof = %zu byte(s)\n", sizeof(long long));
    printf("unsigned long long:   sizeof = %zu byte(s)\n\n", sizeof(unsigned long long));

    /* booléen, pointeur, taille */
    printf("_Bool (bool):         sizeof = %zu byte(s)\n", sizeof(_Bool));
    printf("size_t:               sizeof = %zu byte(s)\n", sizeof(size_t));
    printf("ptrdiff_t:            sizeof = %zu byte(s)\n", sizeof(ptrdiff_t));
    printf("void * (pointer):     sizeof = %zu byte(s)\n\n", sizeof(void*));

    /* flottants */
    printf("float:                sizeof = %zu byte(s)\n", sizeof(float));
    printf("double:               sizeof = %zu byte(s)\n", sizeof(double));
    printf("long double:          sizeof = %zu byte(s)\n\n", sizeof(long double));

    /* bornes (quelques exemples importants) */
    printf("Bornes (exemples) :\n");
    printf("signed char:   [%d, %d]\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char: [0, %u]\n", (unsigned)UCHAR_MAX);
    printf("short:         [%d, %d]\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short:[0, %u]\n", (unsigned)USHRT_MAX);
    printf("int:           [%d, %d]\n", INT_MIN, INT_MAX);
    printf("unsigned int:  [0, %u]\n", UINT_MAX);
    printf("long:          [%lld, %lld]\n", (long long)LONG_MIN, (long long)LONG_MAX);
    printf("unsigned long: [0, %llu]\n", (unsigned long long)ULONG_MAX);
    printf("long long:     [%lld, %lld]\n", (long long)LLONG_MIN, (long long)LLONG_MAX);
    printf("unsigned long long: [0, %llu]\n\n", (unsigned long long)ULLONG_MAX);

    printf("float:  approximate range: [%E, %E] (FLT_MIN..FLT_MAX)\n", FLT_MIN, FLT_MAX);
    printf("double: approximate range: [%E, %E] (DBL_MIN..DBL_MAX)\n", DBL_MIN, DBL_MAX);
    printf("long double: check LDBL_MIN..LDBL_MAX\n");

    return 0;
}
