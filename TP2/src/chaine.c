#include <stdio.h>

int main() {
    char str1[100];
    char str2[100];
    char copie[100];
    char concat[200];

    // Saisie des deux chaînes
    printf("Entrez la première chaîne : ");
    fgets(str1, 100, stdin);

    printf("Entrez la deuxième chaîne : ");
    fgets(str2, 100, stdin);

    // 1) Calcul de la longueur de str1
    int len1 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }

    // 2) Copie de str1 dans copie
    int i = 0;
    while (str1[i] != '\0') {
        copie[i] = str1[i];
        i++;
    }
    copie[i] = '\0';

    // 3) Concaténation str1 + str2 dans concat
    int j = 0;

    // Copie de str1
    while (str1[j] != '\0') {
        concat[j] = str1[j];
        j++;
    }

    // Ajout de str2
    int k = 0;
    while (str2[k] != '\0') {
        concat[j] = str2[k];
        j++;
        k++;
    }

    concat[j] = '\0';

    // Affichage des résultats
    printf("\n--- Résultats ---\n");
    printf("Longueur de la première chaîne : %d\n", len1);
    printf("Copie de la première chaîne : %s", copie);
    printf("Concaténation des deux chaînes : %s", concat);

    return 0;
}
