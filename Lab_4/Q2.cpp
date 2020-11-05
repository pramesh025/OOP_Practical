#include<iostream>

using namespace std;

class distance_{
    int feet;
    float inch;
    public:
        distance_(){
            this->feet=0;
            this->inch=0;
        }
        distance_(int _feet,float _inch){
            this->feet=_feet;
            this->inch=_inch;
        }
        operator float(){
            float meter = this->feet/3.281;
            meter+=this->inch/39.37;
            return meter;
        }
};

int main(){
    int feet;
    float inch;
    cout<<"Enter feet and inch: ";
    cin>>feet>>inch;
    distance_ obj1(feet,inch);
    float meters=obj1;
    cout<<"Data in meter="<<meters<<endl;
}