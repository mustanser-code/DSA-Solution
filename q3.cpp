#include<iostream>
using namespace std;
int main()

{
    /*
    Write a program that prompts the user to enter the radius of a circle,
validates that the input is a positive number, calculates the area using the formula
Area = π× r², and then displays the result rounded to two decimal places with a
descriptive message
    */
   float r;
   float const pi = 3.14;
   cout<<"Enter the radius of the circle: "<<endl;
   cin >> r;
   //calculate the area of the circle using formula 
   float area = pi * r*r;
   cout<<"AREA OF THE CIRCLE IS: "<<area<<endl;
}