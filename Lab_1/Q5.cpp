#include<iostream>

using namespace std;

void add_10(int num= 0){
    cout<<num+10<<endl;
}

int main() {
    add_10(10);
    add_10();
}