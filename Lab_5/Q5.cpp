
#include <iostream>

using namespace std;
 
int main()
{
    try {
        try {
            throw 20;
        }
        catch (int n) {
            cout << "Yo! Aahn't gonna handle dahs shaht nahgga"<<endl;
            throw; // Re-throwing an exception
        }
    }
    catch (int n) {
        cout << "Fine I will do it myself"<<endl;
    }
}
