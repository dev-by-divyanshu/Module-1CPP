#include <iostream>
using namespace std;

void exchange(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}


int main()
{
    int a=15,b=25;
    cout<<"Before exchange:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    exchange(a,b);
    cout<<"After exchange:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    return 0;
}
