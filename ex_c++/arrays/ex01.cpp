// Dada uma seqüência de n números, imprimi-la na ordem inversa à da leitura.

#include <iostream>

using namespace std;

main()
{
    int n;
    cout << "Digite o total de numeros: " << endl;
    cin >> n;

    int array[n];

    cout << "Digite os numeros do vetor: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    
    cout << "Ordem inversa: " << endl;
    for (int i = n-1; i >= 0; i--)
    {
        cout << array[i] << endl;
    }
    
}