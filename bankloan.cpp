#include<iostream>
using namespace std;

//inliine function for processing fee(1%)
inline double processingfee(double amount)
{
    return amount * 0.01;
}

// default intresnt rate(10%)
double monthlyinstallment(double amount,int month,double rate=10.0)
{
    double intrest = amount * rate / 100;  
    return (amount + intrest) / month;
}

//pass by refrence
double partialpayment(double &amount,double payment)
{
    amount=amount-payment;
}

int main(){
    double loan = 500000;
    int months = 12;

    cout<<"Loan Amount: "<<loan<<endl;
    cout<<"Processing Fee: "<<processingfee(loan)<<endl;
    cout<<"Monthly Installment: "<<monthlyinstallment(loan,months)<<endl;
    partialpayment(loan,50000);
    cout<<"partial payment: "<<50000<<endl;
    cout<<"amount after partial payment: "<<loan<<endl;

    return 0;
}
