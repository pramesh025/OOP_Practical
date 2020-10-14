#include<iostream>

using namespace std;

class Complex{
    float real;
    float imag;
    public:
        void setvalue()
        {
            cout<<"Enter data[Format: real imag]: "<<endl;
            cin>>real>>imag;
        }
        void display()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
    
        void sum(Complex obj1, Complex obj2)
        {
            real=obj1.real+obj2.real;
            imag=obj1.imag+obj2.imag;
        }
};


int main(){
    Complex c1,c2,c3;
    c1.setvalue();
    c2.setvalue();
    cout<<"Sum of two complex numbers is"<<endl;
    c3.sum(c1,c2);
    c3.display();
}
