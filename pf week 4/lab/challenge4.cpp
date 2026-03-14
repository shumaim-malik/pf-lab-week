#include <iostream>
using namespace std;

main()
{    
    int bill,discount;
    cout <<" Enter the bill :";
    cin>>bill;

    
    if(bill<=5000){
        discount=bill-bill*0.05;
        cout <<" The discount bill is :"<<discount;

    }

    if(bill>5000){
        discount=bill-bill*0.1;
        cout <<" The discount bill is :"<<discount;

    }
}