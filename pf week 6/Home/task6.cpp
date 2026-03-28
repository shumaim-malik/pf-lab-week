#include <iostream>
using namespace std;

main()
{
   int n;
   cout <<" Enter the number of student : ";
    cin >> n;
    cout <<" Enter names of "<<n<<" student \n ";

    string names[100];

    for(int i = 0; i < n; i++) {
        cin >> names[i];
    }

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(names[i] > names[j]) {
                string temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }

    cout <<" Student in alphabatic order is : \n";
    for(int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }


}