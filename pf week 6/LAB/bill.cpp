#include <iostream>
using namespace std;

main()
{
        int q, d, n, p;
    float total, need;

    cout <<" Enter quaters :";
    cin >> q ;
     cout <<" Enter dimes :";
    cin>> d ;
     cout <<" Enter nickels :";
    cin>> n ;
     cout <<" Enter pennies :";
    cin>> p;
     cout <<" Enter the total amounr due :";
    cin >> need;

    total = q*0.25 + d*0.10 + n*0.05 + p*0.01;

    if(total >= need)
        cout << "yes";
    else
        cout << "no";

    

}


