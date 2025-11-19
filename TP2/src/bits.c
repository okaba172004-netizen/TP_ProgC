#include <stdio.h>

int main() {
    int d = 0x10001000;   // Exemple de valeur : modifiez-la pour tester
    int bit4, bit20, resultat;

    // Extraction du 4e bit de gauche (bit 28)
    bit4 = (d >> (31 - 3)) & 1;   // 31 - (4 - 1) = 28

    // Extraction du 20e bit de gauche (bit 12)
    bit20 = (d >> (31 - 19)) & 1; // 31 - (20 - 1) = 12

    // Vérification : les deux bits doivent être à 1
    if (bit4 == 1 && bit20 == 1) {
        resultat = 1;
    } else {
        resultat = 0;
    }

    printf("%d\n", resultat);

    return 0;
}

