#include <iostream>
using namespace std;

main()
{
   int n;
    float arr[100], sum = 0;
    cout <<" Enter the number of resistor in the series circuit : ";
    cin >> n;

    cout <<" Enter the resistence value (in ohms) of the "<<n<<" resistor , one per line : ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Total Resistance is: " << sum;

}