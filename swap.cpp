#include <iostream>
using namespace std;

void swap(int &a , int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int x , y;
    cout<<"Enter first number(x):";
    cin>>x;

    cout<<"Enter second number(y):";
    cin>>y;

    cout<<"Before swapping:"<<endl;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;

    swap(x,y);
    cout<<"After swapping:"<<endl;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;

    return 0;
}
