#include <stdio.h>

struct Couleur {
    unsigned char r;  // Rouge
    unsigned char g;  // Vert
    unsigned char b;  // Bleu
    unsigned char a;  // Alpha
};

int main() {
    struct Couleur couleurs[10];

    /* ----------------------------------------- */
    /* Initialisation des 10 couleurs en hexadécimal */
    /* ----------------------------------------- */

    couleurs[0] = (struct Couleur){0xef, 0x78, 0x12, 0xff};
    couleurs[1] = (struct Couleur){0x2c, 0xc8, 0x64, 0xff};
    couleurs[2] = (struct Couleur){0xaa, 0x33, 0x55, 0xff};
    couleurs[3] = (struct Couleur){0x10, 0x80, 0xf0, 0xff};
    couleurs[4] = (struct Couleur){0x44, 0x44, 0x44, 0xff};
    couleurs[5] = (struct Couleur){0xff, 0x00, 0x00, 0xff};
    couleurs[6] = (struct Couleur){0x00, 0xff, 0x00, 0xff};
    couleurs[7] = (struct Couleur){0x00, 0x00, 0xff, 0xff};
    couleurs[8] = (struct Couleur){0xf1, 0xc4, 0x0f, 0xff};
    couleurs[9] = (struct Couleur){0x8e, 0x44, 0xad, 0xff};

    /* ----------------------------------------- */
    /* Affichage des couleurs                    */
    /* ----------------------------------------- */

    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].r);
        printf("Vert  : %d\n", couleurs[i].g);
        printf("Bleu  : %d\n", couleurs[i].b);
        printf("Alpha : %d\n", couleurs[i].a);
        printf("--------------------------------\n");
    }

    return 0;
}
