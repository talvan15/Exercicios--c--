#include <iostream>
#include <stdlib.h>

using namespace std;

main()
{
    int array[6];
    
    cout << "NUMEROS SORTEADOS: \n";
    for (int i = 0; i < 6; i++)
    {
       
        for (int j = 0; j < 60; j++)
       {
            srand(i);
       }

        array[i] = rand();
        
        cout << array[i] << endl;
    }
}