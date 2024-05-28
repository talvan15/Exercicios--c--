//Escreva um programa que some todos os elementos de um array de números inteiros.
#include <iostream>

using namespace std;

main()
{
    int array[5];
    int sum = 0;

    cout << "Digite os numeros do vetor: " << endl;
    for (int i = 0; i < 5; i++)
    {
       cin >> array[i];
    }

    for (int i = 0; i < 5; i++)
    {
        sum += array[i];
    }

    cout << "A soma dos valores do vetor eh: " << sum << endl;  
}