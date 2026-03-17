#include <iostream>
using namespace std;

main ()
{ 
   string username , password;

   string name = "";
   int age = 0;
   string coursename = "";

   int choice ;

   for (int i = 1 ; i <= 3 ; i ++)
   {
     cout << " Enter Username : ";
     cin>>username; 

     cout << " Enter Password : ";
     cin>>password; 

     if (username=="admin"&& password=="1234")
     {
        cout <<" Login Successful "<<endl;
     }
     else 
     {
        cout <<" Wrong login "<<endl;
     }
     if (i==3 && !(username=="admin"&& password=="1234"))
     {
        
        cout <<" Too many attempts . Program end ."<<endl;
     }
   }

   for (int i = 1 ; i <=5 ;i++)
   {
    cout<<endl<<"---- University Managment System ----"<<endl;
    cout <<"1. Add Student "<<endl;
    cout <<"2. View student  "<<endl;
    cout <<"3. Add Course "<<endl;
    cout <<"4. Exit "<<endl;

    cout <<" Enter choice";
    cin>>choice;

    if (choice==1)
    {
      cout <<" EntetStudent name ";
      cin>>name;
      cout <<"Enter Student age";
      cin>>age;
      cout <<" Student Added succesfully"<<endl;
    }
   
    else if(choice == 2)
   {
    if(name !="")
    {
        cout << " Student name :"<<name<<endl;
        cout << " Student age :"<<age<<endl;
    }
    else {
        cout <<" No student Record Found "<<endl;

    }
   }

   else if (choice == 3) {
    cout <<" Enter course name :";
    cin>>coursename;

    cout << "Course Added: " << coursename << endl;
   }
   else if(choice == 4)
   {
      cout << "Program Exit"<<endl;

   }
   else
   {
     cout << "Invalid Choice"<<endl;
   }
}
}