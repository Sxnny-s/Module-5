#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main(){
    // init 3 vaiables side1 side2 and hypot
    double side1,side2,hypot;
    //ask user for the 2 sides of a right tringle
    cout << "Hello im going to calculate the hypotenuse of a right triangle" << '\n';
    cout << "Enter the two sides of the triangle "; 
    cin >> side1 >> side2;  

    hypot = sqrt((side1 * side1) + (side2 * side2));
    
    cout << "The hypotenuse is " << hypot;

    // calculate the hypotenuse
    // print it to the screen

    return 0;
}