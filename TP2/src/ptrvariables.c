#include <stdio.h>
#include <stdint.h>

int main() {

    /* ------------------------------- */
    /* Déclaration des variables       */
    /* ------------------------------- */

    char c = 0x12;
    short s = 0x1234;
    int i = 0xa47865ff;
    long int li = 0x11223344;
    long long int lli = 0x5566778899AABBCC;
    float f = 2.0f;                // sera affiché en hex via reinterpretation
    double d = 3.14;               // idem
    long double ld = 1.0L;         // affichage hex manuel

    /* ------------------------------- */
    /* Déclaration des pointeurs       */
    /* ------------------------------- */

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    /* ------------------------------- */
    /* Affichage AVANT manipulation    */
    /* ------------------------------- */

    printf("=== Avant la manipulation ===\n");

    printf("Adresse de c  : %p, Valeur : %02hhx\n", (void*)pc, c);
    printf("Adresse de s  : %p, Valeur : %04hx\n", (void*)ps, s);
    printf("Adresse de i  : %p, Valeur : %08x\n", (void*)pi, i);
    printf("Adresse de li : %p, Valeur : %08lx\n", (void*)pli, li);
    printf("Adresse de lli: %p, Valeur : %016llx\n", (void*)plli, lli);

    /* affichage float en hex via reinterpretation */
    printf("Adresse de f  : %p, Valeur : %08x\n", (void*)pf, *(uint32_t*)&f);

    /* affichage double en hex */
    printf("Adresse de d  : %p, Valeur : %016llx\n", (void*)pd, *(uint64_t*)&d);

    /* affichage long double (16 ou 80 bits soit dépendant du système) */
    unsigned char *bytes_ld = (unsigned char*)&ld;
    printf("Adresse de ld : %p, Valeur : ", (void*)pld);
    for (int k = sizeof(ld) - 1; k >= 0; k--)
        printf("%02x", bytes_ld[k]);
    printf("\n");

    /* ------------------------------- */
    /* Manipulation via pointeurs      */
    /* ------------------------------- */

    *pc = 0x34;                 // changement de valeur via pointeur
    *ps = 0x2222;
    *pi = 0xa47865fe;           // comme dans l’exemple
    *pli = 0x55667788;
    *plli = 0xABCDEF1122334455;
    *pf = 1.0f;                 // exemple donné : 3f800000 en hex
    *pd = 2.718281828;          // nouvelle valeur
    *pld = 3.0L;

    /* ------------------------------- */
    /* Affichage APRES manipulation    */
    /* ------------------------------- */

    printf("\n=== Après la manipulation ===\n");

    printf("Adresse de c  : %p, Valeur : %02hhx\n", (void*)pc, c);
    printf("Adresse de s  : %p, Valeur : %04hx\n", (void*)ps, s);
    printf("Adresse de i  : %p, Valeur : %08x\n", (void*)pi, i);
    printf("Adresse de li : %p, Valeur : %08lx\n", (void*)pli, li);
    printf("Adresse de lli: %p, Valeur : %016llx\n", (void*)plli, lli);

    printf("Adresse de f  : %p, Valeur : %08x\n", (void*)pf, *(uint32_t*)&f);
    printf("Adresse de d  : %p, Valeur : %016llx\n", (void*)pd, *(uint64_t*)&d);

    bytes_ld = (unsigned char*)&ld;
    printf("Adresse de ld : %p, Valeur : ", (void*)pld);
    for (int k = sizeof(ld) - 1; k >= 0; k--)
        printf("%02x", bytes_ld[k]);
    printf("\n");

    return 0;
}
