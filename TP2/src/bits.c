#include <stdio.h>

int main() {
    int d = 0x10001000; // Exemple : vous pouvez changer la valeur

    // Indices des bits (pour un entier 32 bits)
    int bit4 = 28;   // 4ème bit en partant de la gauche
    int bit20 = 12;  // 20ème bit en partant de la gauche

    // Extraction des bits
    int b4 = (d >> bit4) & 1;
    int b20 = (d >> bit20) & 1;

    // Vérification
    int resultat = (b4 == 1 && b20 == 1) ? 1 : 0;

    printf("%d\n", resultat);

    return 0;
}
