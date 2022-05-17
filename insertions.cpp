#include <stdio.h>
#include <iostream>


using namespace std;

void imprimirVetor(int v[], int n){
    for(int i=0;i<n;i++){
            printf("%d ",v[i]);

    }
        printf("\n");
}

void insertionSort(int v[], int n){
    for(int i=1;i<n;i++){
            int tmp = v[i], j;
            for(j = i-1; j>=0 && v[j] > tmp; j--){
                v[j+1] = v[j];
            }
        v[j+1]=tmp;
    }
}

int main(){

    int v[] = {8,7,6,5,4,3,2,1};
    imprimirVetor(v,8);
    insertionSort(v,8);
    imprimirVetor(v,8);


return 0;
}
