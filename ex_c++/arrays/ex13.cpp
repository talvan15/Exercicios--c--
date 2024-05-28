//Escreva um programa que calcule a média dos elementos de um array de números inteiros.
#include <iostream>

using namespace std;

main()
{
    int array[5];
    int sum = 0;
    int media;

    cout << "Digite as 5 notas do para calcular a media: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < 5; i++)
    {
        sum += array[i];
    }

    media = sum/5;

    cout << "A media dessas notas eh: " << media << endl; 
    
}