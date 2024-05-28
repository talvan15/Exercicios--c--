//Tendo	 como	 entrada	 a	 altura	 e	 o	 sexo	 (codificado	 da	 seguinte	 forma:	
//1:feminino	 	 2:masculino)	 de	 uma	 pessoa,	 construa	 um	 programa	 que	
//calcule	e	imprima	seu	peso	ideal,	utilizando	as	seguintes	
//Fórmulas:	
//- para	homens:	(72.7	*	Altura)	– 58	
//- para	mulheres:	(62.1	*	Altura)	– 44.7

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    double altura, peso_ideal;
    int sexo;

    cout << "Digite '1' para masculino e '2' para feminino " << endl;
    cin >> sexo;
     while (sexo != 1 && sexo != 2)
    {
        cout << "Numero inválido! " << endl;
        cout << "Digite '1' para masculino ou '2' para feminino " << endl;
        cin >> sexo;
    }
    
    cout << "Digite a altura em metros: ";
    cin >> altura;
    
    if (sexo == 1)
    {
        peso_ideal = (72.7 * altura) - 58;
        cout << "O peso ideal eh: " << peso_ideal << endl;
    } 
    
    if (sexo == 2)
    {
        peso_ideal = (62.1 * altura) - 44.7;
        cout << "O peso ideal eh: " << peso_ideal << endl;
    } 
    

    
}