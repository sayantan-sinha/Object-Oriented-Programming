#include <iostream>
#include <string>

using namespace std;

class Person
{
    protected:
    string name;

    public:
    void setName(string iname)
    {
        name = iname;
    }
};

class Student : private Person
{
    //Public and Protected members of base class become private members of derived class
    public:

    // By default name would've been private, but here we make it public -> Access modifier
    using Person::name;
    using Person::setName;

    void display()
    {
        cout << "Name: " << name << endl;
    }
    void setStudentName(string iname)
    {
        setName(iname);
    }
};

int main()
{
    Student anil;
    anil.name = "Anil";
    anil.display();

    anil.setName("Neha");
    anil.display();
    return 0;
}