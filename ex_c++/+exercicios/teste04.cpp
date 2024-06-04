//Escreva um código que calcule a soma dos elementos pares e ímpares de um vetor de inteiros v com tamanho n.
#include <iostream>
#include <stdlib.h>

using namespace std;

main()
{
    int n;
    cout << "Digite o tamanho do vetor: " << endl;
    cin >> n;

    int vetor[n];
    for (int i = 0; i < n; i++)
    {
        vetor[i] = rand();
        cout << vetor[i] << "  ";
    }

    int pares = 0, impares = 0;
    for (int i = 0; i < n; i++)
    {
        if ((vetor[i] % 2) == 0)
        {
            pares += vetor[i];
        } else{
            impares += vetor[i];
        }
    }
    
    cout << "A soma dos numeros pares desse vetor eh: " << pares << endl;
    cout << "A soma dos numeros impares desse vetor eh: " << impares << endl;
    

    return 0;
}