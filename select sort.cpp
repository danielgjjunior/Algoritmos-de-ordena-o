#include <stdio.h>
#include <iostream>


using namespace std;

void imprimirVetor(int v[], int n){
    for(int i=0;i<n;i++){
            printf("%d ",v[i]);

    }
        printf("\n");


}

void troca(int v[], int a,int b){

    int tmp = v[a];
    v[a] = v[b];
    v[b] = tmp;
}




void selectionSort(int v[], int n){

    for(int i=0;i<n-1;i++){
        for(int j=i + 1; j<n; j++){ //Posição a ser "arrumada"
                if (v[i] > v[j]){ // Posição a comparar
                    troca(v, i, j);

                }

        }

    }



}



int main (){

    int v[] = {2,4,5,6,73,2,1,3,4};
    imprimirVetor(v, 9);
    selectionSort(v,9);
    imprimirVetor(v,9);
return 0;
}
