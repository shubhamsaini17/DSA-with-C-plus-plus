#include<iostream>
using namespace std;

class human{
    private:
    int height;

    public:
    int age;
    
    int setHeight(int height){
        this->height = height;
    }
    int getHeight(){
        return height;
    }
};
class male: protected human{
    public:
    int setHeight(int h){
        setHeight(h);
    }
    int getHeight(){
        return this->height;
    }
};


int main()
{

// human h1;
// h1.height=4;
male m1;
// m1.setHeight(34);
// m1.height =7;
cout<<m1.height;



/*
human shubham;
shubham.age =21;
shubham.setHeight(164);

cout<<shubham.age<<" "<<shubham.getHeight()<<endl;

male shub;
shub.age=5;
shub.setHeight(8);

cout<<shub.age<<" "<<shub.getHeight()<<endl;
*/


return 0;
}