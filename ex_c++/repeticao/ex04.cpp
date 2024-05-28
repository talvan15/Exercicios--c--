//Faça		um		programa	em	C	que		receba		um		número		inteiro		e	positivo,	e	
//diga	 se	 esse	 número	 é	 primo	 ou	 não.	 Obs:	 Um	 número	 é	 primo	 somente	
//quando	for	divisível		por	1	e	por	ele	mesmo.	

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    int numero;

    cout << "Digite um numero: " << endl;
    cin >> numero;

    while (numero < 1)
    {
        cout << "Digite um numero positivo diferente de zero: " << endl;
        cin >> numero;
    }

    bool primo = true;

    for (int i = 2; i < numero; i++)
    {
        if (numero % i == 0)
        {
            primo = false;
            break;
        } 
        
    }
    if (primo)
    {
        cout << "O NUMERO EH PRIMO :) ";
    } else{
        cout <<  "Nao eh primo :( ";
    }
    
    
    
}