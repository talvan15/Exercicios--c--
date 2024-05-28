#include <iostream>
#include <stdlib.h>

using namespace std;

main()
{
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int n, indice = 0;
    
    cout << "Digite um numero para ser procurado no vetor: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (array[i] == n)
        {
           indice = i;
        }
    }
    if (indice != 0){
        
        cout << "Numero encontrado na posicao " << indice << " Do vetor " <<endl;

    } else{
        cout << "O Numero nao esta no vetor! " << endl;
        } 
    
}