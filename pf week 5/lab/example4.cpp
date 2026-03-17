#include <iostream>
using namespace std;

main ()
{
    int  n, count=0;
    cout <<" Enter number: ";
    cin>> n;

    for(int i = n ; i > 0 ; i = i + 1/10){
        count=count+1;

    }
    cout <<" Total number of digites : "<<count;
    
}