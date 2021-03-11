#include<iostream>

using namespace std;

//First the const of base class is called first and then the const of the derived class is called later
// For destructors, that of the derived class is called first and then the base class 
class Person
{
    public:
    Person()
    {
        cout << "Contructor of Person class" << endl;
    }

    ~Person()
    {
        cout << "Destructor of Person class" << endl;
    }
};

class Student : public Person
{
    public:
    Student()
    {
        cout << "Contructor of Student class" << endl;
    }

    ~Student()
    {
        cout << "Contructor of Student class" << endl;
    }
};

int main()
{
    Student anil;
    return 0;
}