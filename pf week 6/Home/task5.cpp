#include <iostream>
using namespace std;

main()
{
     int n;
     cout <<" Enter numbe rof customer : ";
    cin >> n;
    cout <<" Enter the names of "<<n<<" customers \n";

    string names[100];
    for(int i = 0; i < n; i++) {
        cin >> names[i];
    }

    char ch;
    cout <<" Enter the letter you n want to ckeck : ";
    cin >> ch;

    int count = 0;

    for(int i = 0; i < n; i++) {
        if(names[i][0] == ch)
            count++;
    }

    cout << " Total name starting with " << ch <<" is : "<<count ;

}