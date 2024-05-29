// Verificando se um numero digitado é primo ou não.

#include <iostream>

using namespace std;

main()
{
    int num, contador = 0;

    cout << "Digite um numero para ser verificado: " << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            contador++;
        }
    }

    if (contador <= 2)
    {
        cout << "O numero " << num << " eh primo" << endl;
        
    } else{
        cout << "O numero " << num << " nao eh primo" << endl;
    }

}