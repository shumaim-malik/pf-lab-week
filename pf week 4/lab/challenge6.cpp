#include <iostream>
using namespace std;

main()
{
    int num1 ,num2,value;
    char sign;
    cout <<" Welocme to the calculator "<<endl;
    cout <<" Enter first number :";
    cin>>num1;
    cout<<" Enter the operator :";
    cin>>sign ;
    cout <<" Enter second number :";
    cin>>num2;

    if(sign=='+'){
        value=num1+num2;
        cout<<num1<<sign<<num2<<"="<<value;
    }
    
    if(sign=='-'){
        value=num1-num2;
        cout<<num1<<sign<<num2<<"="<<value;
    }
    
    if(sign=='*'){
        value=num1*num2;
        cout<<num1<<sign<<num2<<"="<<value;
    }
    
    if(sign=='%'){
        value=num1%num2;
        cout<<num1<<sign<<num2<<"="<<value;
    }
    
    if(sign=='/'){
        value=num1/num2;
        cout<<num1<<sign<<num2<<"="<<value;
    }

}