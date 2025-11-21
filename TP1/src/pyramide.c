#include <stdio.h>

int main(void)
{
    int n = 5;   // hauteur de la pyramide
    int i, j;

    printf("Generation d'une pyramide de hauteur %d :\n\n", n);

    for (i = 1; i <= n; i++)
    {
        // ---- Affichage des espaces pour centrer ----
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // ---- Nombres croissants ----
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        // ---- Nombres décroissants ----
        for (j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    printf("\nPyramide complete.\n");

    return 0;
}

