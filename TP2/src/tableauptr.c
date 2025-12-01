#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 11   // taille des tableaux

int main() {
    int tabInt[N];
    float tabFloat[N];

    srand(time(NULL));

    // Remplissage des tableaux avec des valeurs aléatoires
    int *pInt = tabInt;
    float *pFloat = tabFloat;

    printf("Tableau d'entiers (avant la multiplication par 3):\n");
    for (int i = 0; i < N; i++) {
        *(pInt + i) = rand() % 150;  // valeurs entre 0 et 149
        printf("%d ", *(pInt + i));
    }

    printf("\n\nTableau de flottants (avant la multiplication par 3):\n");
    for (int i = 0; i < N; i++) {
        *(pFloat + i) = (float)(rand() % 1000) / 100.0f; // 0.00 à 9.99
        printf("%.2f ", *(pFloat + i));
    }

    // Modification des valeurs à indice pair (i % 2 == 0)
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            *(pInt + i) *= 3;
            *(pFloat + i) *= 3;
        }
    }

    // Affichage après modification
    printf("\n\nTableau d'entiers (après la multiplication par 3):\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(pInt + i));
    }

    printf("\n\nTableau de flottants (après la multiplication par 3):\n");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", *(pFloat + i));
    }

    printf("\n");
    return 0;
}
