#include<iostream>
using namespace std;

class a{
    public:
    void func1(){
        cout<<"i am in class A"<<endl;
    }
};
class b: public a{
    public:
    void func2(){
        cout<<"i am in class B"<<endl;
    }
};
class c: public a{
    public:
    void func3(){
        cout<<"i am in class C"<<endl;
    }
};


int main()
{
    a object1;
    object1.func1();
    
    b object2;
    object2.func1();
    object2.func2();

    c object3;
    object3.func1();
    object3.func3();

return 0;
}