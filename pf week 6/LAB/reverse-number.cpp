#include <iostream>
using namespace std;

main()
{
  int n, arr[100];

    cout <<" Enter the number of element : ";
    cin >> n;
    cout <<" Enter "<<n <<" numbers , one per line \n";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = n-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}
