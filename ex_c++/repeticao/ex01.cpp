//programa	em	C	que	mostre	a	 tabuada	do	número	5.	 (considerar	
//tabuada	do		número	1	ao	10).	

#include <iostream>
#include <cmath>

using namespace std;

main()
{   
    cout << "TABUADA DO NUMERO 5: " << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << "5 " << "x " << i << " = " << i * 5 << endl;
    }
    
}