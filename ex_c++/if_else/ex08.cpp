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
    if (numero_lados < 3)
    {
        cout << "NAO EH UM POLIGONO!";
    }
    if (numero_lados > 5)
    {
        cout << "POLIGONO NAO IDENTIFICADO!";
    }
    
}