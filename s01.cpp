#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    stack <int> s1;
    s1.swap(s);
    cout<<"size of s1 "<<s1.size()<<endl;
    while(!s1.empty())
        {
            cout<<"Values of s1 "<< s1.top()<<endl ;
            s1.pop();
}
        }