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



int main()
{


    int v[8] {2,4,5,6,3,1,2,9};

    imprimirVetor(v,8);

    bubbleSort(v,8);
    imprimirVetor(v,8);


    return 0;
}
