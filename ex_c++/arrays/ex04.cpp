//Dado um vetor de inteiros v com tamanho n, escreva programa para calcular a média ponderada e aritmética dos elementos desse vetor.
#include <iostream>

using namespace std;

main()
{
    int n;
    cout << "Digite o tamanho do vetor: " << endl;
    cin >> n;

    int vetor[n];

    cout << "Digite os elementos do vetor: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Elemento " << i + 1 << ": " << endl;
        cin >> vetor[i];
    }

    // calcular média ponderada. 
    float media_ponderada, resultado;
    for (int i = 0; i < n; i++)
    {
        media_ponderada = (vetor[i] * (i + 1));
        resultado = media_ponderada++;
    }
    cout << "\n" << resultado;
    
    
}