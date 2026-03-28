#include <iostream>
using namespace std;

main()
{
string str;
   cout <<" Enter a string ";
    cin >> str;
 cout <<"shiftrd string "; 
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == 'z')
            cout << 'a';
        else
            cout << char(str[i] + 1);
    }

}
