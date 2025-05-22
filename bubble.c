#include "bubble.h"

void swap(int *a, int *b);
int vergleich(int i, int j);
void swap1(int *a, int *b);

void bubble(int *v, int n, int (*f) (int, int)) {
    for (int i = 0; i<n-1; i++) {
        for (int j = i+1; j<n; j++) {
           if (f(v[i], v[j])==1) {
               swap(&v[i], &v[j]);
           }
        }
    }
}

int vergleichg(int i, int j) {
    if (j<i) {
        return 1;
    } else {
        return 0;
    }
}

int vergleichk(int i, int j) {
    if (i<j) {
        return 1;
    } else {
        return 0;
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}