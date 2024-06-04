// Implemente um código que remova um elemento específico x de um vetor de inteiros v. Certifique-se de que, após a remoção, o vetor seja reorganizado corretamente.
#include <iostream>

using namespace std;

main()
{
    int vetor[10], new_vetor[10];
    int elemento, tamanho_vetor = 0;

    cout << "Digite os numeros do vetor: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> vetor[i];
    }

    cout << "Digite um elemento para ser removido: " << endl;
    cin >> elemento;
    for (int i = 0; i < 10; i++)
    {
        if (elemento != vetor[i])
        {
            new_vetor[tamanho_vetor] = vetor[i];
            tamanho_vetor++;
            
        }
    }
    for (int j = 0; j < 9; j++)
    {
        cout << new_vetor[j] << " " ;
    }
    

    return 0;    
}