#include <iostream>
using namespace std;

class product{
    private:
    int productid;
    string productname;
    string category;
    float price;
    int quantity;

    public:

    void input(){

        cout<<"Enter Product ID:";
        cin>>productid;

        cout<<"Enter Product Name:";
        cin>>productname;

        cout<<"Enter Category:";
        cin>>category;

        cout<<"Enter Price:";
        cin>>price;

        cout<<"Enter Quantity:";
        cin>>quantity;
    }

    void display(){
        cout<<"---PRODUCT DETAIL---"<<endl;
        cout<<"PRODUCT ID:"<<productid<<endl;
        cout<<"NAME:"<<productname<<endl;
        cout<<"CATEGORY:"<<category<<endl;
        cout<<"PRICE:"<<price<<endl;
        cout<<"QUANTITY:"<<quantity<<endl;

    }

};

int main(){
    product P;

    P.input();
    P.display();
    
    
    return 0;
}