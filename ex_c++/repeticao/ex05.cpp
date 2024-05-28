//Faça	 um	 programa	 em	 C++	 que	 receba	 a	 idade	 de	 10	 pessoas	 e	 mostre	
//quantas	são	maiores	que	18	anos.	

#include <iostream>

using namespace std;

int main()
{
    int idade[9];
    int contador = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite a idade da pessoa " << i + 1 << endl;
        cin >> idade[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (idade[i] > 18)
        {
            contador++;
        }
    }
    cout << "O numero de pessoas maiores de 18 anos eh: \n" << contador;
    
    
    
}