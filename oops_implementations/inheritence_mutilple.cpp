#include<iostream>
using namespace std;

class Animal {
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }

};

class Tiger: public Animal{
         public:
         int teeth;
         string name;

};
class Carnivore{
    // if not declared pubic it will automatocall will take private
    public:
    void eat(){
        cout<<"Eats Only Non-Veg"<<endl;
    }
};
// here shera take from both carnivore and tiger

class Shera: public Carnivore, public Tiger{
         public:
         int kids;
         int level;
};




int main(){
     Shera manu;
     manu.eat();


    return 0;
}