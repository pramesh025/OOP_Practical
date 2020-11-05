#include<iostream>

using namespace std;

class distance_class{
    int feet;
    float inch;
    public:
        distance_class(){
            this->inch=0;
            this->feet=0;
        }
        distance_class(float in_meter){
            this->feet=in_meter*3.281;
            this->inch=((in_meter*3.281)-feet)*12;
        }
        void display(){
            cout<<feet<<"\" "<<inch<<"'"<<endl;
        }
};

int main() {
    distance_class obj1;
    float _meter;
    cout<<"Enter data in meter: ";
    cin>>_meter;
    //converting to inch and feet
    obj1=_meter;
    cout<<"meter to feet & inch";
    obj1.display();
}