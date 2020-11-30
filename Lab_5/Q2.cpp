#include<iostream>

using namespace std;

template<class type1>

class rectangle{
    type1 l,b;
    public:
        rectangle(type1 x,type1 y){
            l=x;
            b=y;
        }
        type1 area(){
            return l*b;
        }
};

int main(){
    rectangle <int> intobj(4,5);
    rectangle <float> floatobj(4.5,5.5);
    cout<<intobj.area()<<endl
        <<floatobj.area();
}