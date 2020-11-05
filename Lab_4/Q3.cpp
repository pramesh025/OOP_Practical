#include<iostream>
#include<math.h>

using namespace std;

class polar{
    float _r,_theta;
    public:
        polar(){
            _r=0;
            _theta=0;
        }
        polar(float r,float theta){
            _r=r;
            _theta=theta;
        }
        void display(){
            cout<<"polar:"<<_r<<"/_"<<_theta<<endl;
        }
};

class cartesian{
    float _x,_y;
    public:
        cartesian(){
            _x=0;
            _y=0;
        }
        cartesian(float x,float y){
            _x=x;
            _y=y;
        }
        operator polar(){
            float theta, r;
            r=sqrt(_x*_x+_y*_y);
            theta=atan(_y/_x);
            return polar(r,theta);
        }
        void display(){
            cout<<"cartesian: ("<<_x<<","<<_y<<")"<<endl;
        }
};

int main(){
    class cartesian rect(5.5,4.4);
    class polar pol;
    pol = rect;
    pol.display();
}