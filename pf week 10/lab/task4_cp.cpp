#include <iostream>
#include <cmath>
using namespace std;

float height(float distance , float degree );

int main()
{
    float base , angle  ;
    cout <<" Enter the distance from the base of the tree (in feet) : ";
    cin >> base ;
  
    cout <<" Enter the angle of elevation (in degrees)";
    cin >> angle;

    cout <<" The height of tree is : "<< height (base , angle )<<endl;


    return 0 ;
    
}
float height(float distance , float degree )
{
    float rad = degree/57.2958;
    float ans=tan(rad);

    float h =distance*ans; 
    return h;
}