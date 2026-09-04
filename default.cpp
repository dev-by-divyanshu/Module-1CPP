#include<iostream>
using namespace std;

void display(string name,int age=18)
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}


int main()
{
    display("rahul",19);
    cout << endl;
    display("varun");
    
     return 0;
}
