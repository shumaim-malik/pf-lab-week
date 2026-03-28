#include <iostream>
using namespace std;

main()
{
      int n;
    string arr[100];
    cout <<" Enter the number of chords : ";
    cin >> n;
    cout <<" Enter "<<n<< " chords , one per line : \n "; 

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout <<" jazzifide chords : [";
    for(int i = 0; i < n; i++) {
        if(arr[i].back() != '7')
            arr[i] += '7';

        cout << arr[i] << " ";
    }

    cout <<" ] ";
}


