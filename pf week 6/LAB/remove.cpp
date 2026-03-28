#include <iostream>
using namespace std;

main()
{
     string str;
    cout <<" Enter the string :";
    getline(cin, str);

     cout <<" String without vovels ";
    for(int i = 0; i < str.length(); i++) {
        char c = tolower(str[i]);

        if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u')
           cout << str[i];
    }

}


