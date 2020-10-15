//matrix multiplication with op overloading

#include<iostream>

using namespace std;

class Matrix{
    int data[3][3];
    public:
        void input(){
            cout<<"Enter data:"<<endl;
            for(int i=0;i<3;i++)
                for(int j=0;j<3;j++)
                    cin>>data[i][j];

        }
        
        void display(){
            cout<<"Output is:"<<endl;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<data[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        
        Matrix operator*(Matrix d){                   
            Matrix t;
            for(int i=0;i<3;i++){
                for (int j=0;j<3;j++){
                    t.data[i][j]=0;
                    for(int k=0; k<3;k++){
                        t.data[i][j]+=data[i][k]*d.data[k][j];
                    }
                }
            }
            return t;
        }   
};

int main(){
    Matrix m,n, answer;
    m.input();
    n.input();
    answer=m*n;
    answer.display();
}