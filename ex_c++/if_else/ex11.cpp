#include <iostream>

using namespace std;

main()
{
    float angulo_um, angulo_dois, angulo_tres;

    cout << "Digite os angulos internos do triangulo " << endl;
    cout << "angulo um: " << endl;
    cin >> angulo_um;
    cout << "angulo dois: " << endl;
    cin >> angulo_dois;
    cout << "angulo tres: " << endl;
    cin >> angulo_tres;

    if (angulo_um == 90 || angulo_dois == 90 || angulo_tres == 90)
    {
        cout << "Triangulo RETANGULO! " << endl;
    }
    else if (angulo_um > 90 || angulo_dois > 90 || angulo_tres > 90)
    {
        cout << "Triangulo OBTUSO! " << endl;
    }
    else
    {
        cout << "Triangulo ACUTANGULO! " << endl;
    }
  
}