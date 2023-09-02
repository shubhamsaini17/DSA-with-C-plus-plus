#include<iostream>
using namespace std;

class animal{

    public:
    void bark(){
        cout<<"barking "<<endl;
    }
};
class human{
    public:
    void speak(){
        cout<<"speaking "<<endl;
    }
};
class hybrid: public animal,public human{

};
int main()
{
    hybrid shympu;
    shympu.bark();
    shympu.speak();



return 0;
}