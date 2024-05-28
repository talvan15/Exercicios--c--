//As	maçãs	 custam	 R$	 0,30	 cada	 se	 forem	 compradas	menos	 do	 que	 uma	
//dúzia,	 e	 R$	 0,25	 se	 forem	 compradas	 pelo	 menos	 doze.	 Escreva	 um	
//programa	 que	 leia	 o	 número	 de	 maçãs	 compradas,	 calcule	 e	 escreva	 o	
//valor	total	da	compra

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    int macas_compradas; 
    float valor_compra;

    cout << "Total de macas compradas: " << endl;
    cin >> macas_compradas;
    
    if (macas_compradas >= 12)
    {
        valor_compra = macas_compradas * 0.25;
    } else{
        valor_compra = macas_compradas * 0.30;
    }
    
    cout << "O valor da compra foi de " << valor_compra << "R$" << endl;
}