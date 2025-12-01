#include <stdio.h>

int main() {
    // Tableaux pour stocker les informations
    char noms[5][30] = {
        "Dupont", "Martin", "Durand", "Lefevre", "Bernard"
    };

    char prenoms[5][30] = {
        "Alice", "Paul", "Sarah", "Lucas", "Emma"
    };

    char adresses[5][100] = {
        "12 rue des Fleurs",
        "8 avenue de Paris",
        "45 boulevard Victor",
        "20 rue du Lac",
        "3 impasse des Roses"
    };

    float note_progC[5] = { 14.5, 9.0, 16.0, 12.5, 18.0 };
    float note_sys[5]   = { 13.0, 11.5, 17.5, 10.0, 19.0 };

    // Affichage
    int i;
    for (i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Nom            : %s\n", noms[i]);
        printf("Prénom         : %s\n", prenoms[i]);
        printf("Adresse        : %s\n", adresses[i]);
        printf("Note Prog C    : %.2f\n", note_progC[i]);
        printf("Note Système   : %.2f\n\n", note_sys[i]);
    }

    return 0;
}
