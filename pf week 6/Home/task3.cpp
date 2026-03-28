#include <iostream>
using namespace std;

main()
{
   int n, arr[100];
   cout <<" Enter number of element :";
    cin >> n;
    cout <<" enter "<<n <<" number :";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }

    cout << "Largest number = " << max << endl;
    cout << "Smallest number = " << min;

}