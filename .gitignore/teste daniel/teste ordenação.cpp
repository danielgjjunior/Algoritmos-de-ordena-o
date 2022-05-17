#include<stdio.h>
#include<iostream>


using namespace std;

void imprimirVetor (int v[], int n)
{

    for (int i=0; i<n; i++)
    {

        printf("%d", v[i]);
    }
    printf("\n");
}


void troca (int v[],int a, int b)
{

    int tmp= v[a];
    v[a] = v[b];
    v[b] = tmp;
}
void bubbleSort(int v[], int n)
{

    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-1; j++)
        {
            if (v[j] > v[j+1])
            {
                troca(v,j,j+1);

            }
        }
    }

}





void ordenacaoNumeros(int vet[],int n)
{
    int cont = 1;
    while (cont==0)
    {
        for (int i=0; i<n; i++)
        {
            printf("%d",vet[i]);
        }
        printf("\n");
        for(int i=1; i<n; i++)
        {
            if (vet[i] < vet[i-1])
            {
                for(int i=1; i<n; i++)
                {
                    int y=vet[i];
                    int x=vet[i-1];
                    int z=y;

                    if (z<x)
                    {
                        vet[i]=x;

                        vet[i-1]=z;
                    }
                }
            }
        }
        printf("%d",cont);
        for (int i=0; i<n; i++)
        {
             printf("%d",n);
             system("pause");
            if (vet[i]>vet[i+1])
            {
                cont=0;
            }
            else
            {
                cont=1;
            }
        }
    }
}














int main()
{

    int n;
    scanf("%d", &n);
    int v[n];
    for (int i= 0; i<n; i++)
    {
        scanf("%d", &v[i]);

    }


    imprimirVetor(v,n);
    ordenacaoNumeros(v,n);
    imprimirVetor(v,n);


    return 0;
}
