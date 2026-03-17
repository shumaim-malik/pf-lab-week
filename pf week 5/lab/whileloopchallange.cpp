#include <iostream>
using namespace std;

main ()
{ 
    int n1 ,n2 , gdc , lcm ;
    cout <<" Enter first number : ";
    cin>>n1;

    cout<<" Enter second number :";
    cin>>n2;

    int a=n1, b=n2 , c;

    while (b != 0)
    {
        c=b;
        b=a%b;
        a=c;

    }
        gdc=a;

        lcm=(n1*n2)/gdc;

        cout<<" GDC of "<<n1<<" and "<<n2 <<" is : "<<gdc<<endl;
         cout<<" LCM of "<<n1<<" and "<<n2 <<" is : "<<lcm;

}
