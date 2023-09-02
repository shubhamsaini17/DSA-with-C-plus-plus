#include<iostream>
using namespace std;

class MyClass {
public:
    int value;
    MyClass(int val) : value(val) {}
};

//Constant Member Functions: 
class MyClass {
public:
    int getValue() const {
        // Some code
        return value;
    }
    // Constant Function Parameters:
    void printValue(const int val) {
    // val is a constant parameter that cannot be modified
    // Some code
}

private:
    int value;
};

int main()
{
// obj is a constant object of MyClass with an initial value of 10
const MyClass obj(10);
obj.value = 20;
return 0;
}