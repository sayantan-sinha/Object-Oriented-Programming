#include <iostream>

using namespace std;

// An abstract class is a class containing one or more than one pure virtual methods
// We can't create objects for abstract classes

class Person {
    public:
    // Every derived class from Person must override this function => Pure Virtual Function
    virtual void introduce() = 0; // Pure Virtual Function
};

class Student : public Person {
    public:
    void introduce(){ //Overriding introduce function. W/o this it will throw an error
        cout << "Hi from student" << endl;
    }
};

// This is optional. Generally Pure virtual funcs aren't defined inside the base class
void Person::introduce(){
    cout << "Hey from Person" << endl;
}

int main()
{
    Student anil;
    // Person anjali; // Invalid. No objects can be created for abstract classes
    anil.introduce();
    return 0;
}