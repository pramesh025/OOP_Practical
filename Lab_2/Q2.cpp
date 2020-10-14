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
    student obj[50];
    int num;
    cout<<"Enter total number of students: ";
    cin>>num;

    //input data
    cout<<"Enter details of students:"<<endl;
    for(int i=0;i<num;i++){
        obj[i].getDetails();
        cout<<endl;
    }
    cout<<endl;
   
    //output data
    cout<<"Details of students:"<<endl;
    for(int i=0;i<num;i++){
        obj[i].showDetails();
        cout<<endl;
    }
}

