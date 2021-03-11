#include <iostream>
#include <string>

using namespace std;

// Protected: Member and Member functions are available to the subclass but not to non class items
// Similar to private but available to base classes

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

class Student : public Person
{
    public:
    void display()
    {
        cout << "My name is: " << name << endl; // name can be accessed in subclass
    }
};

int main()
{
    Student anil;
    // anil.name = "Anil" // This is invalid
    anil.setName("Anil");
    anil.display();
    return 0;
}