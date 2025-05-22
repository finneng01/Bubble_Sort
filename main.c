#include "main.h"
void dimension (int *n);
void einlesen_vektor(int *v, int n);
void ausgabe_vektor(int *v, int n);
int bubble(int *v, int n);

int main() {
    int *v;
    int n;
    dimension(&n);

    v = (int *)malloc(n*sizeof(int));
    if (v == NULL) {
        fprintf(stderr, "Fehler beim Speichern des Vektors\n");
        return 1;
    }


    einlesen_vektor(v, n);

    printf("\nEingegebener Vektor:\n");
    ausgabe_vektor(v, n);

    bubble(v, n);

    printf("\nSortierter Vektor:\n");
    ausgabe_vektor(v, n);

    free(v);
    return 0;
}