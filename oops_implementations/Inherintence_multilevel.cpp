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

class Shera: public Tiger{
         public:
         int kids;
         int level;
};

int main(){
     Shera manu;
     manu.speak();


    return 0;
}