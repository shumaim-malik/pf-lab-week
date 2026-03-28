#include <iostream>
using namespace std;

main()
{
   string names[5];
   cout <<" Enter names of 5 student : \n";

    for(int i = 0; i < 5; i++) {
        cin >> names[i];
    }

    cout <<" \n ";
    cout <<" Student Names are : \n";
    for(int i = 0; i < 5; i++) {
        cout << names[i] << endl;
    }


}