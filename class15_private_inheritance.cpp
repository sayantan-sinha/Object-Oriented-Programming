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
    void display()
    {
        cout << "Name: " << name << endl;
    }
    void setStudentName(string iname)
    {
        setName(iname);
    }
};

// class Gstudent : Student //This means private inheritance
class Gstudent : public Student
{
    public:
    void setGstudent(string iname)
    {
        // name = iname; // This is invalid
        setStudentName(iname);
    }
};

int main()
{
    Student anil;
    anil.setStudentName("Anil");
    anil.display();
    // anil.setName("Anil"); //Invalid due to private inheritance

    Gstudent neha;
    neha.setGstudent("Neha");
    neha.display();
    return 0;
}