#include<iostream>

using namespace std;

inline int max_number(int a, int b){
    if(a>b)
        return a;
    else 
        return b;
}

int main() {
    cout<<max_number(1,2)<<endl;
    cout<<max_number(3,2)<<endl;
    cout<<max_number(2,2)<<endl;
}