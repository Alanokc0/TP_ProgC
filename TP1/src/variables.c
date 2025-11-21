#include <stdio.h>

int main(void)
{
    char c = 'A';
    int a = 1;
    float b = 2.123145f;
    short d = 2;
    long int e = 10234567L;
    double f = 13.4443255;
    long long int I = 1234567890123456789LL;  // valid 64-bit value

    printf("%c\n", c);
    printf("%d\n", a);
    printf("%f\n", b);
    printf("%hd\n", d);
    printf("%ld\n", e);
    printf("%lf\n", f);
    printf("%lld\n", I);

    return 0;
}
