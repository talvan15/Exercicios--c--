//Escreva	 um	 programa	 que	 verifique	 a	 validade	 de	 uma	 senha	 fornecida	
//pelo	 usuário.	 A	 senha	 válida	 é	 o	 número	 1234.	Devem	 ser	impressas	 as	
//seguintes	mensagens:	
//ACESSO	PERMITIDO	caso	a	senha	seja	válida.	
//ACESSO	NEGADO	caso	a	senha	seja	inválida.

#include <iostream> 

using namespace std;

main()
{
    int senha;

    cout << "Digite sua senha: " << endl;
    cin >> senha;

    while (senha != 1234)
    {
        cout << "ACESSO NEGADO! " << endl;
        cout << "Digite novamente: ";
        cin >> senha;
    }
    if (senha = 1234)
    {
        cout << "ACESSO PERMITIDO! " << endl;
    }
    
}