#include <iostream>
using namespace std;

main()
{
    int num , arr[100];
    cout <<" Enter number of element : ";
    cin >> num;
    cout <<" Enter "<<num <<" numbers";

    for(int i = 0; i<num ;i++)
    {
        cin >> arr[i];
        
    }
    int count =0;
    for (int i =0 ; i<num;i++){
        if (arr[i]%2 ==0)
        {
            count ++;
        }
    }
    cout <<" Even numbers : "<<count;
}