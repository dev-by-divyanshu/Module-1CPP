#include<iostream>
using namespace std;

//Inline functionfor total marks calculation

inline int result(int a, int b, int c, int d, int e)
{
    return (a+b+c+d+e);
}

//Default argument for maximum marks

float percentage(int total, float maxmarks=500)
{
    return (total*100/maxmarks);
}

//pass by reference for reevaluation

void reevaluation(int &marks,int newmarks)
{
    marks = newmarks;
}

int main()
{
    int a=75,b=85,c=90,d=87,e=89;

    cout<<"original marks in subject 1: "<<a<<endl;
    //updating marks in subject 1 after reevaluation
    reevaluation(a,80);
    int total = result(a,b,c,d,e);
    cout<<"updated marks in subject 1: "<<a<<endl;
    cout<<"total marks: "<<total<<endl;
    cout<<"percentage: "<<percentage(total)<<"%"<<endl;

    return 0;
}
