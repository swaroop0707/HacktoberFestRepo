#include<iostream>

using namespace std;

int main()
{
    int fibb, a = 0, b = 1, c;
    cout<<"Enter the no. of Fibonacci term : ";
    cin>>fibb;
    
    cout<<a<<" "<<b<<" ";
    for (int i = 1; i < fibb; i++)
    {
        c = a + b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
    cout<<endl;
    //fibonacci series would be printed
    return 0;
}

