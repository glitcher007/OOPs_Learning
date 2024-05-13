
#include<iostream>
using namespace std;

class B {
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        /*
        int value1= this->a;
        int value2=obj.a;
        cout<<"output "<<value2-value1<<endl;
*/

   cout<<"print something"<<endl;
    }

    void operator() (){
        cout<<"mainr bracket hun"<<this->a<<endl;
    }
};

class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog: public Animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
} ;

int main(){

Dog obj;
obj.speak();




return 0;
}