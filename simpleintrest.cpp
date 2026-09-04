//SIMPLE INTREST= P*R*T/100

#include <iostream>
using namespace std;

float simpleInterest(float p, float t, float r = 5.0)
{
    return (p * r * t) / 100;
}

int main()
{
    float principal, time;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter time period (years): ";
    cin >> time;

    cout << "Simple Interest: "
         << simpleInterest(principal, time);

    return 0;
}
