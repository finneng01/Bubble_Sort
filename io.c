#include "io.h"

void dimension (int *n){
    printf("Bitte Dimension eingeben\n");
    scanf("%d", n);
}

void einlesen_vektor(int *v, int n) {
    printf("Bitte %d Zahlen eingeben\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
}

void ausgabe_vektor(int *v, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}


