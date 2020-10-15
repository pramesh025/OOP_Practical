#include<iostream>

using namespace std;

class complex{
    float real;
    float imag;
    public:
        void input_(){
            cout<<"Enter data[Format: real imag]: "<<endl;
            cin>>real>>imag;
        }
        void display(){
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
        friend complex operator +(complex,complex);
};
    
complex operator +(complex obj1, complex obj2){
    complex temp;
    temp.real=obj1.real+obj2.real;
    temp.imag=obj1.imag+obj2.imag;
    return temp;
}

int main(){
    complex c1,c2,c3;
    c1.input_();
    c2.input_();
    c3=c1+c2;
    c3.display();
}
