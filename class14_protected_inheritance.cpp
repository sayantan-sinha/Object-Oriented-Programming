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

class Student : protected Person
{
    // Public and protected members of base class become protected members of derived class
    public:
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
    // anil.setName("Anil"); //This won't work for Protected inheritance
    anil.setStudentName("Anil");
    anil.display();
    return 0;
}