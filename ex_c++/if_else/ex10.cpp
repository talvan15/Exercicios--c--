//. Escreva	 um	 programa que	 leia	 as	 medidas	 dos	 lados	 de	 um	 triângulo	 e	
//escreva	se	ele	é	Equilátero,	Isósceles	ou	Escaleno.	Sendo	que:	
//− Triângulo	Equilátero:	possui	os	3	lados	iguais.	
//− Triângulo	Isóscele:	possui	2	lados	iguais.	
//− Triângulo	Escaleno:	possui	3	lados	diferentes

#include <iostream>

using namespace std;

main()
{
    int a,b,c;

    cout << "Digite a medida dos lados do triangulo: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a == b && b == c)
    {
        cout << "TRIANGULO EQUILATERO " << endl;
    }
    else if (a == b || b == c || a == c)
    {
        cout << "TRIANGULO ISOCELES! " << endl;
    }
    else{
        cout << "TRIANGULO ESCALENO " << endl;
    }
    
    
    
}