#include <iostream>
using namespace std;

class patient{
    private:
    int patientid;
    string name;
    int age;
    string disease;
    string doctor;

    public:

    void input(){

        cout<<"Enter Patient ID:";
        cin>>patientid;

        cout<<"Enter Patient Name:";
        cin>>name;

        cout<<"Enter Patient age:";
        cin>>age;

        cout<<"Enter Disease:";
        cin>>disease;

        cout<<"Enter Doctor assigned:";
        cin>>doctor;
    }

    void display(){
        cout<<"---PATIENT DETAIL---"<<endl;
        cout<<"Patient ID:"<<patientid<<endl;
        cout<<"NAME:"<<name<<endl;
        cout<<"AGE:"<<age<<endl;
        cout<<"DISEASE:"<<disease<<endl;
        cout<<"DOCTOR ASSIGNED:"<<doctor<<endl;

    }

};

int main(){
    patient P;

    P.input();
    P.display();
    
    
    return 0;
}