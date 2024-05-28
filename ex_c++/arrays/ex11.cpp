//Escreva um programa que procure um elemento específico em um array de números inteiros e imprima sua posição, se encontrado.
#include <iostream>

using namespace std;

main()
{
    int array[] = {10,20,30,40,50};
    int n;

    cout << "Digite um valor para ser procurado no vetor: " << endl;
    cin >> n;

    for (int i = 0; i < 5; i++)
    {
        if (array[i] == n)
        {
            cout << "Valor encontrado na posicao " << i << " Do vetor " << endl;
            break;
        }
        
    }
    
}