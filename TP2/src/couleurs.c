#include <stdio.h>

struct Couleur {
    unsigned char r;  // Rouge
    unsigned char g;  // Vert
    unsigned char b;  // Bleu
    unsigned char a;  // Alpha
};

int main() {
    struct Couleur couleurs[10] = {
        { 0xef, 0x78, 0x12, 0xff }, // Couleur 1
        { 0x2c, 0xc8, 0x64, 0xff }, // Couleur 2
        { 0xff, 0x00, 0x00, 0xff }, // Rouge
        { 0x00, 0xff, 0x00, 0xff }, // Vert
        { 0x00, 0x00, 0xff, 0xff }, // Bleu
        { 0xaa, 0xbb, 0xcc, 0xff }, // Gris bleu
        { 0x12, 0x34, 0x56, 0xff }, // Bleu acier
        { 0xf0, 0xe1, 0xd2, 0xff }, // Sépia clair
        { 0x10, 0x20, 0x30, 0xff }, // Noir bleuté
        { 0x99, 0x88, 0x77, 0xff }  // Gris chaud
    };

    int i;
    for (i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].r);
        printf("Vert  : %d\n", couleurs[i].g);
        printf("Bleu  : %d\n", couleurs[i].b);
        printf("Alpha : %d\n\n", couleurs[i].a);
    }

    return 0;
}
