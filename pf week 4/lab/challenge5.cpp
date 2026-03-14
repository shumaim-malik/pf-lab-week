#include <iostream>
using namespace std;

main()
{
    int salary=10000;
    int advanceformonths=6;
    int advancepermonth=salary*0.5;
    int totaladvance=advancepermonth*advanceformonths;
    int monthsrequire=50000/advancepermonth;

    if(totaladvance>=50000){
        cout <<" you can buy th laptop ";
    }
    else
    {
        cout<<" Months require to buy laptop :"<<monthsrequire;
    }

}