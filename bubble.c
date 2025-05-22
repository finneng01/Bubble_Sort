#include "bubble.h"

void swap(int *a, int *b);
int vergleich(int i, int j);

int bubble(int *v, int n ) {
    for (int i = 0; i<n-1; i++) {
        for (int j = i+1; j<n; j++) {
           if (vergleich(v[i], v[j])==1) {
               swap(&v[i], &v[j]);
           }
        }
    }
    return 0;
}
int vergleich(int i, int j) {
    if (j<i) {
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