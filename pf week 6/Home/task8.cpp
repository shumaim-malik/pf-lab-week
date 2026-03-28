#include <iostream>
using namespace std;

main()
{
   int n;

    cout << "Enter number of flights: ";
    cin >> n;

    string flightNumber[100];
    string destination[100];
    int seats[100];


    for(int i = 0; i < n; i++) {
        cout << "\nFlight " << i+1 << endl;

        cout << "Enter Flight Number: ";
        cin >> flightNumber[i];

        cout << "Enter Destination: ";
        cin >> destination[i];

        cout << "Enter Seats Available: ";
        cin >> seats[i];
    }


    cout << "\n--- All Flights ---\n";
    for(int i = 0; i < n; i++) {
        cout <<" flight "<< flightNumber[i] << " -> "
             << destination[i]
             << " Seats avalible : " << seats[i] << endl;
    }

    
    cout << "\n--- Flights with seats less than 5 ---\n";
    for(int i = 0; i < n; i++) {
        if(seats[i] < 5) {
            cout <<" flight" << flightNumber[i] << " -> "
                 << destination[i]  << " Seats avalible : " << seats[i] << endl;
        }
    }


}
