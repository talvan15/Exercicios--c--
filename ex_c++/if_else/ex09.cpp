//Escreva	um	programa	para	ler	3	valores	inteiros	e	escrever	o	maior	deles.	
//Considere	que	o	usuário	não	informará	valores	iguais.

#include <iostream>

using namespace std;

main()
{
    int n1,n2,n3;

    cout << "Digite os tres numeros: " << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    
    int maior = n1;
    if (n2 > maior)
    {
        maior = n2;
    }
    if (n3 > maior)
    {
        maior = n3;
    }
    cout << "O maior numero eh " << maior << endl;
    
    
    
}