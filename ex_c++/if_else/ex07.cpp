//7. Escreva	um	programa	para	ler	o	número	de	lados	de	um	polígono	regular	
//e	a	medida	do	lado	(em	cm).	Calcular	e	imprimir	o	seguinte:	
//− Se	o	número	de	lados	for	igual	a	3	escrever	TRIÂNGULO	e	o	valor	da	
//área
//− Se	o	número	de	lados	for	igual	a	4	escrever	QUADRADO	e	o	valor	da	
//sua	área.	
//− Se	o	número	de	lados	for	igual	a	5	escrever	PENTÁGONO

#include <iostream>
#include <cmath>

using namespace std;

main()
{
    int numero_lados, medida_cm;

    cout << "Digite o numero de lados: " << endl;
    cin >> numero_lados;
    cout << "Digite a medida em centimetros: " << endl;
    cin >> medida_cm;

    if (numero_lados == 3)
    {
        int area = numero_lados * medida_cm;  
        cout << "TRIANGULO! " << "com área de " << area << " cm" << endl;
    }
    if (numero_lados == 4)
    {
        int area = numero_lados * medida_cm;
        cout << "QUADRADO! " << "com área de " << area << " cm" << endl;
    }
    if (numero_lados == 5)
    {
        cout << "PENTÁGONO! " << endl;
    }
}