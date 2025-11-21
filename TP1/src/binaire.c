#include <stdio.h>

void afficher_binaire(int n)
{
    // On affiche les 32 bits (int standard)
    for (int i = 31; i >= 0; i--)
    {
        int bit = (n >> i) & 1;  // extraction du bit
        printf("%d", bit);

        // Pour la lisibilité : espace tous les 4 bits
        if (i % 4 == 0)
            printf(" ");
    }
    printf("\n");
}

int main(void)
{
    int valeurs[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(valeurs) / sizeof(valeurs[0]);

    for (int i = 0; i < taille; i++)
    {
        printf("Nombre : %d\n", valeurs[i]);
        printf("Binaire : ");
        afficher_binaire(valeurs[i]);
        printf("\n");
    }

    return 0;
}
