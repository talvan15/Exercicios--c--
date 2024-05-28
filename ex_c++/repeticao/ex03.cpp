//Faça	um	programa	em	C	que	exiba	na	tela	os	números	ímpares	entre	100	
//e	300.	
#include<iostream>

using namespace std;

main()
{
    for (int i = 100; i <= 300; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " " ;
        }
        
    }
       
}