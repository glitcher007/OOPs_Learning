#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"Hello love Babbar"<<endl;
    }
    void sayHello(string name){
        cout<<"Hello love Babbar"<<endl;
    }
    // here oveloading will occur
/*
    int sayHello(){
        return 1;
    }
    */
   
};

int main(){
     

     A obj;
     obj.sayHello();

    return 0;
}