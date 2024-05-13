#include<iostream>
using namespace std;

class A {
    public:
    void func(){
      cout<<"I am a"<<endl;
    }
};

class B {
    public:
    void func(){
        cout<<"I am B"<<endl;
    }
};

class C: public A,public B{

};

int main(){
    C obj;
    obj.B::func();
    // use scope to avoid ambiguous

    return 0;
}