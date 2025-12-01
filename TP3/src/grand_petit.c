#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tab[TAILLE];
    int i;
    int max, min;

    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires entre 1 et 1000
    for (i = 0; i < TAILLE; i++) {
        tab[i] = rand() % 1000 + 1;
    }

    // Initialisation du max et min avec le premier élément du tableau
    max = min = tab[0];

    // Parcours du tableau pour trouver le max et le min
    for (i = 1; i < TAILLE; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
        if (tab[i] < min) {
            min = tab[i];
        }
    }

    // Affichage du résultat
    printf("Le numéro le plus grand est : %d\n", max);
    printf("Le numéro le plus petit est : %d\n", min);

    return 0;
}
