#include <iostream>
using namespace std;

inline int addition(int a,int b)
{
    return a+b;
}

inline int subtraction(int a, int b)
{
    return a-b;
}

inline int multiplication(int a,int b)
{
    return a*b;
}

inline int division(int a, int b)
{
    return a/b;
}

inline int square(int r)
{
        return r*r;
}

int main()
{
    cout<<"addition of : "<<addition(10,20)<<endl;
    cout<<"substraction : "<<subtraction(30,12)<<endl;
    cout<<"multiplication : "<<multiplication(12,8)<<endl;
    cout<<"division : "<<division(50,5)<<endl;
    cout<<"square of 5: "<<square(5)<<endl;
    
    return 0;
}
