#include <iostream>
using namespace std;

main()
{
    char c;
    cout <<" Enter any character in lower case :";
    cin>>c;

    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        cout<<" It is a vowel";
    }
    if(c>='0' && c<='9'){
        cout<<" It is a number ";
    }
    if((c>='a'&& c<='z' ) && !(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')) {
        cout<<" It is a constnt";
    }

}