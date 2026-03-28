#include <iostream>
using namespace std;

main()
{
     string username[3];
    string password;
    string correctUser = "admin";
    string correctPass = "1234";

    bool login = false;

    
    for(int i = 0; i < 3; i++) {
        cout << "Enter Username: ";
        cin >> username[i];

        cout << "Enter Password: ";
        cin >> password;

        if(username[i] == correctUser && password == correctPass) {
            login = true;
            cout << "Login Successful\n";
            break;
        } else {
            cout << "Invalid Credentials\n";
        }
    }

   
    if(login) {
        string studentName[3];
        int studentAge[3];
        string courses[3];

        int studentCount = 0;
        int courseCount = 0;

        int choice;

        while(true) {
            cout << "\n--- University Managment System ---\n";
            cout << "1. Add Student\n";
            cout << "2. View Students\n";
            cout << "3. Add Course\n";
            cout << "4. View Courses\n";
            cout << "5. Exit\n";

            cout << "Enter choice: ";
            cin >> choice;

            if(choice == 1) {
                if(studentCount < 3) {
                    cout << "Enter Name: ";
                    cin >> studentName[studentCount];

                    cout << "Enter Age: ";
                    cin >> studentAge[studentCount];
                
                    
                    studentCount++;
                } else {
                    cout << "Student limit reached\n";
                }
            }
            else if(choice == 2) {
                cout << "\nStudents List:\n";
                for(int i = 0; i < studentCount; i++) {
                    cout << studentName[i] << " - " << studentAge[i] << endl;
                }
            }
            else if(choice == 3) {
                if(courseCount < 3) {
                    cout << "Enter Course Name: ";
                    cin >> courses[courseCount];
                    courseCount++;
                } else {
                    cout << "Course limit reached\n";
                }
            }
            else if(choice == 4) {
                cout << "\nCourses List:\n";
                for(int i = 0; i < courseCount; i++) {
                    cout << courses[i] << endl;
                }
            }
            else if(choice == 5) {
                cout << "Exiting Program...\n";
                break;
            }
            else {
                cout << "Invalid Choice\n";
            }
        }
    }
    else {
        cout << "Too many failed attempts. Access Denied.\n";
    }

    return 0;
}


