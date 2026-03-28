#include <iostream>
using namespace std;

main()
{

    int a[2], b[100], n;

    cout <<" Enter the first array number to store(must be 2 ) ";
    cin >> a[0] >> a[1];
    cout <<" Enter the number of element for second array : ";
    cin >> n;
    cout <<" Enter "<<n<<" number to store in second array :";

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    cout << a[0] << " ";

    for(int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }

    cout << a[1];

    return 0;
}


