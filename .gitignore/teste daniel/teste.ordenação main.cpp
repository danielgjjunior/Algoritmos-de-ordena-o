#include<stdio.h>
#include<iostream>


using namespace std;



int main (){

int n=0;
int vet[8]{8,3,9,10,7,8,4,3};
bool cont=false;

while (cont!=true) {
for (int i=0;i<7;i++){
printf("%d",vet[i]);
}
printf("\n");
for(int i=1;i<7;i++){

    if (vet[i] < vet[i-1]){

for(int i=1;i<7;i++){
       int y=vet[i];
        int x=vet[i-1];
        int z=y;
printf("%d",y);
printf("%d",x);
printf("%d",z);


system("pause");


        if (z<x){

            vet[i]=x;
            vet[i-1]=z;


    }
}
}
}
for (int i=1; i<7; i++){

if (vet[i]>vet[i+1]){

    cont=false;
}else{

cont=(!cont);
}

}

}

for (int i=0; i<7; i++){

        printf("%d", vet[i]);
    }
        printf("\n");



return 0;
}
