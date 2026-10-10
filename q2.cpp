#include<iostream>
using namespace std;
/*
Write a program that accepts two numbers as input from the user, performs
and displays their sum, difference, product, and quotient with proper formatting.
Additionally, the program should handle division by zero by displaying an
appropriate error message instead of crashing, and should clearly label each result
for better readability
*/
int main()
{
    int x , y;
    cout<<"Write two integer number: "<<endl;
    cin >> x >> y;
    cout<<"SUM: "<<x + y<<endl;
    cout<<"Difference: "<<x -y<<endl;
    cout<<"Product: "<< x * y<<endl;
    if (y != 0)
        cout<<"Division: "<<x / y;
    else
        cout<<"Zero error y must be greater than 0 "<<endl;
}

