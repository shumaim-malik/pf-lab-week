#include <iostream>
using namespace std;

main()
{
    int n, arr[100];
    cout <<" Enter number of elements :";
    cin >> n;
    cout <<" Enter"<<n<<" numbers ,one per line ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    cout << "Largest num is : " << max;

}