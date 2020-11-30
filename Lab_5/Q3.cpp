#include<iostream>
#include<list>
#include <iterator>

using namespace std;
class strings{
    list <string> li;
    public:
        void add_item(string word){
            li.push_back(word);
        }
        void sort_item(){
            li.sort();
        }
        void display(){
            copy(li.begin(),
            li.end(),
            ostream_iterator<string>(cout, "\n"));
        }
};
int main(){
    strings obj_list;
    int num;
    cout<<"how many string do u want to add?: ";
    cin>>num;
    string temp;
    for(int i=0;i<num;i++){
        cout<<"enter string:";
        cin>>temp;
        obj_list.add_item(temp);
    }
    obj_list.sort_item();
    cout<<"sorted data:"<<endl;
    obj_list.display();
}