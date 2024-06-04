//Escreva programa que receba um vetor de inteiros v com tamanho n e retorne o maior e o menor elemento desse vetor.
#include <iostream>
#include <stdlib.h>

using namespace std;

main()
{
    int n, maior_numero, menor_numero;
    cout << "Digite o tamanho do vetor: " << endl;
    cin >> n;

    int vetor[n];
    for (int i = 0; i < n; i++)
    {
        vetor[i] = rand();
        cout << vetor[i] << " " ;
    }

    maior_numero = vetor[0];
    menor_numero = vetor[0];

    for (int i = 0; i < n; i++)
    {
        if (vetor[i] > maior_numero)
        {
            maior_numero = vetor[i];
        }
        if (vetor[i] < menor_numero)
        {
            menor_numero = vetor[i]; 
        }
        
    }

    cout << "\n MAIOR NUMERO: " << maior_numero << endl;
    cout << "MENOR NUMERO: " << menor_numero << endl;
 
}