#include<iostream>
using namespace std;


int main()

{
    float arr[3];
    float element;
    cout<<"Elemnet to search: "<<endl;
    cin >> element;
    cout<<"Enter array element: "<<endl;
    bool found = false;
    for (int i =0 ; i < 3; i++)
        {
            cin >> arr[i];
            if (arr[i] == element)
                found = true;
        }
    if (found)
            {
                cout<<"found"<<endl;
            }
            else
                cout<<"not found"<<endl;
    cout<<endl;
}