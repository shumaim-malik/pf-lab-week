#include <iostream>
using namespace std;

main()
{
    double tempofcity1 , tempofcity2 , difference;
     
    cout <<" Enter the Temperature of city 1 :";
    cin>> tempofcity1;
     
    cout <<" Enter the Temperature of city 2 :";
    cin>>tempofcity2;
    
    difference=tempofcity1-tempofcity2;

    if (difference >10 ){
        cout <<" Difference is too big ";

    }
    else{
        cout <<"Program Ends";

    }

}