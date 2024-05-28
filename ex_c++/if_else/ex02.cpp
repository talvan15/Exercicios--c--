//Escreva	 um	 programa	 para	 ler	 o	 ano	 de	 nascimento	 de	 uma	 pessoa	 e	
//escrever	 uma	 mensagem	 que	 diga	 se	 ela	 poderá	 ou	 não	 votar	 este	 ano	
//(não	é	necessário	considerar	o	mês	em	que	ela	nasceu).

#include <iostream>
#include <cmath>

using namespace std;

main()
{
   int ano_nascimento, ano_atual = 2024;
    cout << "Digite seu ano de nascimento: " << endl;
    cin >> ano_nascimento;

   if (ano_atual - ano_nascimento >= 16)
   {
    cout << "Voce podera votar esse ano :) " << endl;
   } else{
        cout << "Voce nao podera votar esse ano :( " << endl;
   }
   
}