#include<stdio.h>
#include<iostream>
using namespace std;

void merge(int v[], int s, int m, int e) {
    int tmp[(e - s) + 1];
    int i = s, j = m + 1, k = 0;
    while (i <= m && j <= e) {
        if (v[i] < v[j]) {
            tmp[k++] = v[i++];
        } else {
            tmp[k++] = v[j++];
        }
    }
    for (; i <= m; i++, k++) {
        tmp[k] = v[i];
    }
    for (; j <= e; j++, k++) {
        tmp[k] = v[j];
    }
    for (i = s, k = 0; i <= e; i++, k++) {
        v[i] = tmp[k];
    }
}

void mergeSort(int v[], int s, int e) {
    if (s < e) {
        int m = (s + e) / 2;
        mergeSort(v, s, m);
        mergeSort(v, m + 1, e);
        merge(v, s, m, e); // Aqui é a lógica da conquista
    }
}

void imprimirVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {

    int v[] = { 2, 9, 1, 7, 3, 4, 6, 5 };
    int n = 8;
    imprimirVetor(v, n);
    mergeSort(v, 0, n - 1);
    imprimirVetor(v, n);

    return 0;
}
