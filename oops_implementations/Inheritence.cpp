

#include <iostream>
#include <string>

using namespace std;

class Human {
public:
    string name;
    int age;
    string gender;
;

public:
    Human(string n, int a, string g) : name(n), age(a), gender(g) {}

    void display_info() {
        cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender << endl;
    }
};

class Male : public Human {
public:
    Male(string n, int a) : Human(n, a, "Male") {}

    void display_info() {
        cout << "Male Information:" << endl;
        Human::display_info();
    }
};



int main() {
    // Creating an instance of Human
    Human human1("Alice",30,"Female");
    human1.display_info();

    Male male1("Bob", 35);
    male1.display_info();

    return 0;
}



