//Escreva um programa que gere um array de números inteiros aleatórios dentro de um intervalo especificado.
#include <iostream>
#include <stdlib.h>

using namespace std;

main()
{
    int array[10];

    srand(60);
    for (int i = 0; i < 10; i++)
    {
        array[i] = rand();
        cout << array[i] << " ";
    }

    return 0;
}