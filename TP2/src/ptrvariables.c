#include <stdio.h>
#include <stdint.h>   // pour uintX_t et cast du contenu mémoire

int main() {

    /* Déclaration des variables de base */
    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long int li = 0x11223344;
    long long int lli = 0x1122334455667788;
    float f = 1.0f;                 // sera affiché en hex via reinterpretation
    double d = 2.0;                 // idem
    long double ld = 3.0L;

    /* Déclaration des pointeurs */
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("=== Avant manipulation ===\n");

    printf("Adresse de c  : %p, Valeur : %02x\n", (void*)pc,  (unsigned char)c);
    printf("Adresse de s  : %p, Valeur : %04x\n", (void*)ps,  (unsigned short)s);
    printf("Adresse de i  : %p, Valeur : %08x\n", (void*)pi,  (unsigned int)i);
    printf("Adresse de li : %p, Valeur : %08lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse de lli: %p, Valeur : %016llx\n", (void*)plli, (unsigned long long)lli);

    /* Pour les flottants : on réinterprète leur contenu mémoire */
    printf("Adresse de f  : %p, Valeur : %08x\n", (void*)pf,  *(uint32_t*)&f);
    printf("Adresse de d  : %p, Valeur : %016llx\n", (void*)pd, *(uint64_t*)&d);

    /* Pour long double : taille variable selon architecture */
    unsigned char *bytes = (unsigned char*)&ld;
    printf("Adresse de ld : %p, Valeur : 0x", (void*)pld);
    for (int k = sizeof(long double)-1; k >= 0; k--) {
        printf("%02x", bytes[k]);
    }
    printf("\n");


    /* ---------------------------- */
    /*      MANIPULATION VIA PTR    */
    /* ---------------------------- */

    *pc  = 0x34;
    *ps  = 0x5678;
    *pi  = 0x87654321;
    *pli = 0xaabbccdd;
    *plli = 0x0011223344556677;

    *pf = 2.0f;     // par pointeur
    *pd = 4.0;      // par pointeur
    *pld = 5.0L;    // par pointeur

    printf("\n=== Après manipulation ===\n");

    printf("Adresse de c  : %p, Valeur : %02x\n", (void*)pc,  (unsigned char)c);
    printf("Adresse de s  : %p, Valeur : %04x\n", (void*)ps,  (unsigned short)s);
    printf("Adresse de i  : %p, Valeur : %08x\n", (void*)pi,  (unsigned int)i);
    printf("Adresse de li : %p, Valeur : %08lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse de lli: %p, Valeur : %016llx\n", (void*)plli, (unsigned long long)lli);

    printf("Adresse de f  : %p, Valeur : %08x\n", (void*)pf,  *(uint32_t*)&f);
    printf("Adresse de d  : %p, Valeur : %016llx\n", (void*)pd, *(uint64_t*)&d);

    printf("Adresse de ld : %p, Valeur : 0x", (void*)pld);
    for (int k = sizeof(long double)-1; k >= 0; k--) {
        printf("%02x", bytes[k]);
    }
    printf("\n");

    return 0;
}
