#include <iostream>

using namespace std;

class Person {
    public:
    virtual void introduce() {
        cout << "Hi from person" << endl;
    }
};

class Student : public Person {
    public:
    void introduce() {
        cout << "Hi from student" << endl;
    }
};

class Gstudent : public Student {
    public:
    void introduce() {
        cout << "Hi from Gstudent" << endl;
    }
};

void WhosThis(Person &p)
{
    p.introduce();
}

int main()
{
    Person anil;
    Student anjali;
    Gstudent rashmit;

    WhosThis(anil);
    WhosThis(anjali);
    WhosThis(rashmit);

    return 0;
}