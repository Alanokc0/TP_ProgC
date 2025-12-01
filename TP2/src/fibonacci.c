#include <stdio.h>

int main() {
    int n;
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    int U0 = 0;
    int U1 = 1;

    // Cas particuliers si n < 1
    if (n == 0) {
        printf("0\n");
        return 0;
    }

    printf("0 1");  // Affichage des deux premiers termes

    int i;
    for (i = 2; i <= n; i++) {
        int Un = U0 + U1;
        printf(" %d", Un);

        // Mise à jour pour le prochain terme
        U0 = U1;
        U1 = Un;
    }

    printf("\n");
    return 0;
}
