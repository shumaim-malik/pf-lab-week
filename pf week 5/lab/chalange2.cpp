#include <iostream>
using namespace std;

main ()
{  
    int number , digit , count=0 ;
    cout <<" Enter the number : ";
    cin>>number;

    cout <<" Enter the digit : ";
    cin>>digit;

    for ( int freq=number ; freq>0 ; freq=freq / 10 )
    {
        int rem=freq%10;
        if (rem == digit){
            count++;
        }
        
    }

    cout <<" Frequency of "<<digit <<"in "<<number<<" is "<<count << endl;
}
