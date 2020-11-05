#include<iostream>
#include<math.h>

using namespace std;

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
        float x(){
            return _x;
        }        
        float y(){
            return _y;
        }
        void display(){
            cout<<"cartesian: ("<<_x<<","<<_y<<")"<<endl;
        }
};

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
        polar(cartesian obj){
            _r=sqrt(obj.x()*obj.x()+obj.y()*obj.y());
            _theta=atan(obj.y()/obj.x());
        }
};


int main(){
    class cartesian rect(5.5,4.4);
    class polar pol;
    pol = rect;
    pol.display();
}