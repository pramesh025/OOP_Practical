#include<iostream>

using namespace std;

template<class type1>
type1 add(type1 x,type1 y){
    return x+y;
}

int main(){
    int i1=20, i2=30;
    float f1=20.2, f2=30.3;
    cout<<add(i1,i2)<<endl
        <<add(f1,f2);
}