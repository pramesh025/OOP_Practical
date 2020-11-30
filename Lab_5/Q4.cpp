#include<iostream>

using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter two numbers:"<<endl;
    cin>>num1>>num2;
    try{
        if(num2!=0)
            cout<<"division:"<<(float)num1/num2<<endl;
        else 
            throw(num2);
    }
    catch(int num){
        cout<<"Exception caught denominator = "<<num<<endl;
    }
}