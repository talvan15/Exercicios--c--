//Dado um vetor de inteiros v com tamanho n, escreva programa para calcular a média ponderada e aritmética dos elementos desse vetor.
#include <iostream>

using namespace std;

main()
{
    int n;
    cout << "Digite o tamanho do vetor" << endl;
    cin >> n;

    int vetor[n];
    cout << "Digite os elementos do vetor: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }

    // média aritmética
    int soma_elementos = 0;
    float media_aritmetica;

    for (int i = 0; i < n; i++){
        soma_elementos += vetor[i];
    }
    
    media_aritmetica = soma_elementos / n;

    // média ponderada
    int soma_pesos = 0;
    float media_ponderada;
    for (int i = 0; i < n; i++)
    {
        soma_pesos += (i + 1) * vetor[i]; 
    }

    media_ponderada = soma_pesos / n;

    cout << "A media aritmética dos elementos: " << media_aritmetica << endl;
    cout << "A media ponderada dos elementos: " << media_ponderada <<endl;
}