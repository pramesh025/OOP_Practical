#include<iostream>

using namespace std;

class complex{
	float real, img;
	public:
		complex(){
			real=0;
			img=0;
		}
		complex(float a, float b){
			real=a;
			img=b;
		}
		complex(complex &obj){
			real=obj.real;
			img=obj.img;
		}
		void display(){
            cout<<real<<" + "<<img<<"i"<<endl;
		}
		~complex(){
			cout<<"Terminated"<<endl;
		}
};

int main ()
{
	complex c1, c2(3,.5), c3(c2);
	c1.display();
	c2.display();
	c3.display();
}
