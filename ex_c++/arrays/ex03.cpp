#include <iostream>

using namespace std;

main()
{
    float milimetros_dia[7];
    double mais_chuva;
    int dia_mais_chuva = 0;

    cout << "Digite o total de chuva em cada dia (mm) : " << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << "DIA " << i + 1 << ": ";
        cin >> milimetros_dia[i];
    }

    mais_chuva = milimetros_dia[0];
    for (int i = 0; i < 7; i++)
    {
       if (milimetros_dia[i] > mais_chuva)
       {
            mais_chuva = milimetros_dia[i];
            dia_mais_chuva = i + 1;
       }   
    }

    double menos_chuva = milimetros_dia[0];
    int dia_menos_chuva = 0;
    for (int i = 0; i < 7; i++)
    {
        if (milimetros_dia[i] < menos_chuva)
        {
            menos_chuva = milimetros_dia[i];
            dia_menos_chuva = i + 1;
        }
        
    }
    
    cout << "O dia que mais choveu foi o dia " << dia_mais_chuva << " com " << mais_chuva << " mm" << endl;
    cout << "O dia que mais choveu foi o dia " << dia_menos_chuva << " com " << menos_chuva << " mm" << endl;
        
}