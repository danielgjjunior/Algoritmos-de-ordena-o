#include<stdio.h>
#include<iostream>


using namespace std;


int main (){
int n=0;
int vet[4]{4,2,1,0};
int cont;
for (int i=0;i<4;i++){
printf("%d",vet[i]);
}
printf("\n");
for(int i=1;i<4;i++){

    if (vet[i] < vet[i-1]){

for(int i=1;i<=5;i++){
        cont=0;
       int y=vet[i];
        int x=vet[i-1];
        int z=y;


        if (z<x){

            vet[i]=x;
            vet[i-1]=z;
            cont=1;
    }
}
}
}

for (int i=0; i<4; i++){

        printf("%d", vet[i]);
    }
        printf("\n");



return 0;
}
