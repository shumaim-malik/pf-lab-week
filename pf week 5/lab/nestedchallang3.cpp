#include <iostream>
using namespace std;

main ()
{ int pin = 1234;
    int enteredPin;
    int attempts = 3;
    bool loginSuccess = false;
    double balance = 1000.0;
    int choice;
    double amount;

  
    for (int i = 1; i <= attempts; i++) {
        cout << "Enter your ATM PIN: ";
        cin >> enteredPin;

      
        if (enteredPin == pin) {
            cout << "Login Successful" << endl;
            loginSuccess = true;
           
        } else {
            if (i < attempts) {
                cout << "Incorrect PIN. You have " << (attempts - i) << " attempts left." << endl;
            } else {
                cout << "Account locked. Too many incorrect attempts." << endl;
            }
        }
    }
    if (loginSuccess) {
        while (choice!=4) 
        {
            cout << "\n--- ATM Menu ---" << endl;
            cout << "1 -> Check Balance" << endl;
            cout << "2 -> Deposit Money" << endl;
            cout << "3 -> Withdraw Money" << endl;
            cout << "4 -> Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1) {
                
                cout << "Your current balance is: $" << balance << endl;
            } 
            else if (choice == 2) {
                
                cout << "Enter deposit amount: ";
                cin >> amount;
                balance += amount;
                cout << "Successfully deposited. New balance: $" << balance << endl;
            } 
            else if (choice == 3) {
             
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                if (amount <= balance) {
                    balance -= amount;
                    cout << "Transaction successful. Remaining balance: $" << balance << endl;
                } else {
                    cout << "Insufficient Balance" << endl;
                }
            } 
            else if (choice == 4) {
              
                cout << "Thank you for using our ATM. Goodbye!" << endl;
            } 
            else {
                cout << "Invalid choice. Please try again." << endl;
            }

        }
    }
}
