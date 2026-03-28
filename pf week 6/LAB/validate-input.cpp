#include <iostream>
using namespace std;

main()
{
   int n, arr[100];

    cout <<" Enter the number of element :"; 
    cin >> n;

    cout <<" Enter "<<n <<" numbers, one per line :";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                cout << "Already Entered"<<arr[i];
                break;
            }
            cout <<endl;

          }
}
}

