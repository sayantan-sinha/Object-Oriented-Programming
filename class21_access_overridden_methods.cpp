#include <iostream>
#include <string>

using namespace std;

class Person
{
    public:
    void introduce()
    {
        cout << "Hi I am a Person" << endl;
    }
};

class Student : public Person
{
    public:
    // This method overrides the base class introduce method
    void introduce()
    {
        //Accessing base class method
        Person::introduce();
        cout << "I am awesome" << endl;
    }
};

int main()
{
    Student anil;
    anil.introduce();
    //Overriding introduce method
    anil.Person::introduce();
    return 0;
}