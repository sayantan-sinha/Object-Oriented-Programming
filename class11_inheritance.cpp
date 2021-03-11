#include <iostream>
#include <string>

using namespace std;

// Constrctors, destructors, overloaded operators and friend functions are not inherited
//Base class
class Person
{
    public:
    string name;
    int age;
    void setName(string iname)
    {
        name = iname;
    }

    void setAge(int iage)
    {
        age = iage;
    }
};

//Subclass
class Student : public Person
{
    public:
    int id;
    void setId(int iid)
    {
        id = iid;
    }

    void introduce()
    {
        cout << "Hi I am " << name << " and I am " << age << " years old and my id is " << id << endl;
    }
};

int main()
{
    Student anil;
    anil.setName("Anil");
    anil.setAge(23);
    anil.setId(110);

    anil.introduce();
    return 0;
}