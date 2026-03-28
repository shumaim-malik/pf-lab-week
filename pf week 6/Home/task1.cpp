#include <iostream>
using namespace std;

main()
{
    int number , sum , num[100];

    cout <<" Enter number of element : ";
    cin>>number ;
    cout <<" Enter "<< number <<" number ";
    for (int i=0 ; i <number ; i++)
    {
        cin>>num[i];
        sum = sum+num[i];
    }
    cout <<" sum of all elements :"<<sum;
}