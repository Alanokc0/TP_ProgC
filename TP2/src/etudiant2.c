#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note1;   // Programmation en C
    float note2;   // Système d'exploitation
};

int main() {
    struct Etudiant etu[5];
    int i;

    printf("=== Saisie des informations des 5 étudiant.e.s ===\n");

    for (i = 0; i < 5; i++) {
        printf("\nÉtudiant.e %d :\n", i + 1);

        printf("Nom : ");
        fgets(etu[i].nom, 30, stdin);
        etu[i].nom[strcspn(etu[i].nom, "\n")] = '\0';

        printf("Prénom : ");
        fgets(etu[i].prenom, 30, stdin);
        etu[i].prenom[strcspn(etu[i].prenom, "\n")] = '\0';

        printf("Adresse : ");
        fgets(etu[i].adresse, 100, stdin);
        etu[i].adresse[strcspn(etu[i].adresse, "\n")] = '\0';

        printf("Note 1 (Programmation en C) : ");
        scanf("%f", &etu[i].note1);

        printf("Note 2 (Système d'exploitation) : ");
        scanf("%f", &etu[i].note2);

        getchar();  // Nettoie le \n restant après scanf
    }

    printf("\n\n=== Affichage des informations des étudiant.e.s ===\n");

    for (i = 0; i < 5; i++) {
        printf("\nÉtudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", etu[i].nom);
        printf("Prénom : %s\n", etu[i].prenom);
        printf("Adresse : %s\n", etu[i].adresse);
        printf("Note 1 : %.2f\n", etu[i].note1);
        printf("Note 2 : %.2f\n", etu[i].note2);
    }

    return 0;
}
