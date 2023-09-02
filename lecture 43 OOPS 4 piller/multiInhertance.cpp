#include<iostream>
using namespace std;

class animal{

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking "<<endl;
    }
};
class dog: public animal{

};
class germanSheferead: public dog{

};
int main()
{
    // dog dazzler;

    // dazzler.speak();
    // cout<<dazzler.age<<endl;

    germanSheferead dazzler;

    dazzler.speak();


return 0;
}