#include <iostream>
using namespace std;

main()
{
 
    string books[5];
    bool issued[5] = {false};

    int count = 0;
    int choice;

    while(true) {
        cout << "\n1.Add Book\n2.View Books\n3.Borrow Book\n4.View Issued\n5.Exit\n";
        cin >> choice;

        if(choice == 1) {
            if(count < 5) {
                cin >> books[count];
                count++;
            } else {
                cout << "Library full\n";
            }
        }
        else if(choice == 2) {
            for(int i = 0; i < count; i++) {
                cout << books[i] << endl;
            }
        }
        else if(choice == 3) {
            int index;
            cin >> index;

            if(index < count && !issued[index]) {
                issued[index] = true;
                cout << "Borrowed\n";
            } else {
                cout << "Not available\n";
            }
        }
        else if(choice == 4) {
            for(int i = 0; i < count; i++) {
                if(issued[i])
                    cout << books[i] << endl;
            }
        }
        else if(choice == 5) {
            break;
        }
        else {
            cout << "Invalid\n";
        }
    }

 
}


