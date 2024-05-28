//Escreva um programa que encontre o maior e o menor elemento em um array de números inteiros.

#include <iostream>

using namespace std;

main()
{
    int n;

    cout << "Digite o total de numeros do array: " << endl ;
    cin >> n;

    int array[n];

    cout << "Digite os numeros do array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int maior_numero, menor_numero;

    // iniciando a busca pelo maior numero.
    maior_numero = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] > maior_numero)
        {
            maior_numero = array[i];
        }
        
    }

    // iniciando a busca pelo menor numero.
    menor_numero = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] < menor_numero)
        {
            menor_numero = array[i];
        }
        
    }

    // imprimir os valores.
    cout << "O maior numero do vetor: " << maior_numero << endl;
    cout << "O menor numero do vetor: " << menor_numero << endl;

    return 0;
}