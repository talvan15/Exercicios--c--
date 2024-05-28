//Faça	 um	 programa	 em	 C	 que	 mostre	 a	 tabuada	 de	 qualquer	 número	
//escolhido	pelo	usuário	(considerar	tabuada	do	número	1	ao	10).	

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    int numero;

    cout << "Digite um numero para ser mostradada a tabuada: " << endl;
    cin >> numero;

    cout << "Tabuada do numero " << numero << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << numero << " X " << i << " = " << numero * i << endl;
    }
    

}