#include <iostream>

using namespace std;

main()
{
    int num = 10, maior = 0, menor = 0;
    int array[num];

    cout << "Digite os numeros do vetor: " << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> array[i];
    }
    
    maior = array[0];
    for (int i = 0; i < num; i++)
    {
        if (array[i] > array[0])
        {
            maior = array[i];
        }
        
    }
    cout << "Maior numero: " << maior << endl;

    menor = array[0];
    for (int i = 0; i < num; i++)
    {
        if(array[i] < array[0])
        {
            menor = array[i];
        }  
    }
    cout << "Menor numero: " << menor << endl;
    
}