#include <iostream>

using namespace std;

main()
{
    double media[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite a notas do aluno " << i + 1 << ": " << endl;
        cin >> media[i];
    }
    

    for (int i = 0; i < 10; i++)
    {
        if (media[i] > 7)
        {
            cout << "Aluno " << i + 1 << " Foi aprovado! " << endl;
        }
        else if (media[i] < 5)
        {
            cout << "Aluno " << i + 1 << " Foi reprovado! " << endl;
        }
        else if (media[i] >= 5 || media[i] <= 7)
        {
            cout << "Aluno " << i + 1 << " Foi para a recuperacao! " << endl;
        }
    }
}