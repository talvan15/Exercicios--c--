//Escreva	 um	 programa	 para	 ler	 2	 valores	 (considere	 que	 	 não	 serão	
// informados	valores	iguais)	e	escrever	o	maior	deles.

#include <iostream>

using namespace std;

int main()
{
    int valor_um, valor_dois;

    cout << "Digite dois valores diferentes: " << endl;
    cin >> valor_um;
    cin >> valor_dois;

    while (valor_um == valor_dois)
    {
        cout << "Os valores são iguais! \nDigite novamente: " << endl;
        cin >> valor_um;
        cin >> valor_dois;
    }
    
    if (valor_um > valor_dois)
    {
        cout << valor_um;
    } else {
        cout << valor_dois;
    }
    
}