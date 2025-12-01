#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tab[TAILLE];
    int i, entier, trouve = 0;

    srand(time(NULL));

    // Remplissage du tableau avec des entiers aléatoires entre -50 et 50
    for (i = 0; i < TAILLE; i++) {
        tab[i] = rand() % 101 - 50; // valeurs de -50 à 50
    }

    // Affichage du tableau
    printf("Tableau :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    // Demande à l'utilisateur l'entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &entier);

    // Recherche de l'entier dans le tableau
    for (i = 0; i < TAILLE; i++) {
        if (tab[i] == entier) {
            trouve = 1;
            break; // on peut arrêter la recherche dès qu'on trouve l'entier
        }
    }

    // Affichage du résultat
    if (trouve) {
        printf("\nRésultat : entier présent\n");
    } else {
        printf("\nRésultat : entier absent\n");
    }

    return 0;
}
