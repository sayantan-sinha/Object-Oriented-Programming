#include<iostream>

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
    // This mehtod overrides the base class introduce method
    void introduce()
    {
        cout << "I am awesome" << endl;
    }
};

int main()
{
    Student anil;
    anil.introduce();
    return 0;
}