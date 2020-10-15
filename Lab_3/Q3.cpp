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
    
        complex operator +(complex obj){
            complex temp;
            temp.real=this->real+obj.real;
            temp.imag=this->imag+obj.imag;
            return temp;
        }
};


int main(){
    complex c1,c2,c3;
    c1.input_();
    c2.input_();
    c3=c1+c2;
    c3.display();
}
