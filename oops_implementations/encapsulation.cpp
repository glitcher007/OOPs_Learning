#include<iostream>
using namespace std;

class student {
    private:
      string name;
      int age;
      int height;
    
    public:
    int getage(){
        return this->age;
    }
};

int main(){
    student first;
    // student is the class here in which two functions and datamenbera are binded 
    // thus implementation of encapsulation can be seen from here
    cout<<"its working"<<endl;
    

}

