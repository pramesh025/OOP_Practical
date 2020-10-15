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
    
        complex operator ++(){
            complex temp;
            temp.real=++this->real;
            temp.imag=++this->imag;
            return temp;
        }
        complex operator ++(int){
            complex temp;
            temp.real=this->real++;
            temp.imag=this->imag++;
            return temp;
        }
};


int main(){
    complex c1,c2,c3;
    c1.input_();
    cout<<"After increament"<<endl;
    c2=c1++;
    c3=++c1;
    c1.display();
    c2.display();
    c3.display();
}
