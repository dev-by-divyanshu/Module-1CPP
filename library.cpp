#include <iostream>
using namespace std;

class book{
    private:
    int bookId;
    string booktitle;
    string author;
    float price;

    public:

    void input(){

        cout<<"Enter Book ID:";
        cin>>bookId;

        cout<<"Enter Book Title:";
        cin>>booktitle;

        cout<<"Enter Author Name:";
        cin>>author;

        cout<<"Enter Book Price:";
        cin>>price;
    }

    void display(){
        cout<<"---BOOK DETAIL---"<<endl;
        cout<<"Book ID:"<<bookId<<endl;
        cout<<"Title:"<<booktitle<<endl;
        cout<<"Author:"<<author<<endl;
        cout<<"Price:"<<price<<endl;

    }

};

int main(){
    book B;

    B.input();
    B.display();
    
    
    return 0;
}