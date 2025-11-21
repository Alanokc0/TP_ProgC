#include <stdio.h>

int main(void)
{
    int compteur = 5;   // Testez d'autres valeurs < 10

    if (compteur >= 10) {
        printf("Erreur : compteur doit être strictement inférieur à 10.\n");
        return 1;
    }

    for (int i = 1; i <= compteur; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // Si j est pair, afficher #
            if (j % 2 == 0)
                printf("# ");
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}
