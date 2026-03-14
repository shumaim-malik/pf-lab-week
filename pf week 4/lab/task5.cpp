#include <iostream>
using namespace std;

main()
{    
    char going;
    cout <<" Are your friend going ? (press y for yes) :";
    cin>>going;

    if(going=='y'){
        cout<<" You are also  going ";
    }
    else{
        cout<<" You are not going ";
    }
}