#include <iostream>
using namespace std;

class bankcustomer
{
private:
    string name;
    int age;
    int customerID;
    float balance;

public:
    void input()
    {

        cout << "Enter your name:";
        cin >> name;

        cout << "Enter age:";
        cin >> age;

        cout << "Enter customer ID:";
        cin >> customerID;

        cout << "Enter Balance:";
        cin >> balance;
    }

    void display()
    {
        cout << "---CUSTOMER DETAIL---" << endl;
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
        cout << "Customer ID:" << customerID << endl;
        cout << "Balance:" << balance << endl;
    }
};

int main()
{
    bankcustomer customer;

    customer.input();
    customer.display();

    return 0;
}