#include <iostream>

using namespace std;

class Person
{
    public:
    virtual void introduce()
    {
        cout << "Hey from Person" << endl;
    }
};

class Student : public Person
{
    public:
    void introduce()
    {
        cout << "Hey from Student" << endl;
    }
};

class Farmer : public Person
{
    public:
    void introduce()
    {
        cout << "Hey from Farmer" << endl;
    }
};

void whosThis(Person &p)
{
    p.introduce();
}

int main()
{
    Farmer anil;
    Student alex;

    whosThis(anil);
    whosThis(alex);
    return 0;
}