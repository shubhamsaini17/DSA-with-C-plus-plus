#include<iostream>
#include <cstring>

// #include "hero.cpp"
using namespace std;

class hero{

    private:
    int health;

    public:
    char level;
    char *name;
    // static data member
    static int timeToComplete;
    // default constructor
    hero(){
        cout << "default construct called" << endl;
        name = new char[100];
    }
    // parameter constructor
    hero(int health){
        cout<<"this-> "<<this<<endl;
        this->health = health;
    }
    hero(int health, char level){
        this->level=level;
        this->health = health;
    }

//copy constructor

hero(hero &temp){
    char *ch = new char [strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this->name = ch;

    cout<<"copy constructor called"<<endl;
    this->health = temp.health;
    this->level = temp.level;
}
    void print(){

        cout<<endl;
        cout << "name: " << this->name << endl;
        cout << "level: " << this->level << endl;
        cout << "health: " << this->health << endl;
         cout<<endl;
    }

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(int L){
        level = L;
    }
   
    void setname(char name[]){
        strcpy(this->name, name);
    }

    ~hero() {
        cout<<"destructor is called"<<endl;
    }

    // static function 
    static int random(){
        return timeToComplete;
    }

};

// initialize the staic member 
int hero::timeToComplete = 5;

int main()
{   
    /*
    // Creating a object    // static allocation  
    hero rohan;
    rohan.setHealth(100);
  
    cout << "health: " << rohan.level << endl;
    rohan.setLevel('g');
    cout << "health: " << rohan.getLevel() << endl;

    // dynamically allocation of object
    hero *anjali = new hero; // pointer vala concept
    anjali->setLevel('A');
    anjali->setHealth(30);
    //   anjali.setHealth(10);

    // method 1
    cout<<"level anjali : "<<(*anjali).level<<endl;
    cout<<"health of anjali is : "<<(*anjali).getHealth()<<endl;
    // method 2
    cout<<"level anjali: "<<anjali->level<<endl;
    cout<<"health of anjali is : "<<anjali->getHealth()<<endl;

    //in case of public

    // rohan.health=100;
    // rohan.level='A';
    
    // cout<<sizeof(rohan)<<endl;
    // cout<<sizeof(hero)<<endl;

// private

    rohan.setHealth(40);
    cout<<"rohan health: "<<rohan.getHealth()<<endl;

    rohan.setLevel('c');
    cout<<"rohan level: "<<rohan.getLevel()<<endl;

    */
 
 /*
 // object creation statically
   hero ramesh(10);
   cout<<"address of ramesh: "<<&ramesh<<endl;
    ramesh.getHealth();
   // dynamically create

     hero *h = new hero(11);
        h->print();
     hero temp(22,'b');

     temp.print();
*/

/*
hero suresh(70,'c');
suresh.print();

// copy contrutors called
// suresh data copy in ritesh
hero ritesh(suresh); // meaning in bellow lines
// ritesh.health = suresh.health;
// ritesh.level = suresh.level;

ritesh.print();
*/

/*
hero hero1;
hero1.setHealth(12);
hero1.setLevel('D');
char name[7] = "babbar";
hero1.setname(name);

hero1.print();

// use default copy constructor

hero hero2(hero1);
hero2.print();

// hero hero2 = hero1;

hero1.name[0] = 'g';
hero1.print(); 

hero1 = hero2;

hero1.print();
hero2.print();
*/

// destructure

//static alloction
hero h;
// dynamic alloction
hero *b = new hero();

// destructure call manually for dynammically allocate objects
delete b;

// to access static members

// prefered method
cout<<hero::timeToComplete << endl;
// not prefered method
cout<<h.timeToComplete << endl;
cout<<hero::random()<< endl;


return 0;
}