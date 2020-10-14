#include <iostream>

using namespace std;
 
class student{
    string name;
    int roll;
    int total;
    float perc;
    public:
        void getDetails(void){
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter roll number: ";
            cin>>roll;
            cout<<"Enter total marks: ";
            cin>>total;
            perc=(float)total/500*100;
        }
        void showDetails(void){
        cout<<"Student detail:"<<endl
            <<"Name:"<<name<<endl
            <<"Roll Number:"<<roll<<endl
            <<"Total:"<<total<<endl
            <<"Percentage:"<< perc<<endl;
        }
};
 
int main()
{
    student obj1;
    cout<<"Enter details of student "<<endl;
    obj1.getDetails();
    cout<<endl;
    obj1.showDetails();
}

