#include <iostream>
using namespace std;

main()
{
     int n, arr[100];
     cout <<"Enter the size of array :";
    cin >> n;
    cout <<" Enter "<<n<<" element of array :";
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool special = true;

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0 && arr[i] % 2 != 0)
            special = false;
        if(i % 2 != 0 && arr[i] % 2 == 0)
            special = false;
    }

    if(special)
        cout << "true";
    else
        cout << "false";

}


