#include<iostream>>
using namespace std;

class A{
    public:
    void func(){
        cout<<"Inside function1"<<endl;

    }
};
class B:public A{
  public:
  void func2(){
    cout<<"Inside function2"<<endl;
  }
};
class C: public A{
    public:
    void func3(){
        cout<<"Inside function 3"<<endl;
    }
};
class D: public B{
    public:
    void func4(){
        cout<<"Inside function 4"<<endl;
    }
};
class E: public B{
    public:
    void func5(){
        cout<<"Inside function 5"<<endl;
    }
};

int main(){
    A objec1;
    objec1.func();

    B object2;
    object2.func2();
    object2.func();

    E object3;
    object3.func2();
    object3.func5();
    object3.f
    
}


