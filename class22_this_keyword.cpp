#include<iostream>

using namespace std;
// Only the member functions of a class have 'this' keyword. Friend fucntions don't have it as they are not memebers


class Person
{
    private:
    int age;

    public:
    void setAge(int age)
    {
        // Just like self keyword in python
        this->age = age;
    }

    void showAge()
    {
        cout << "Age: " << this->age << endl;
    }
};

int main()
{
    Person anil;
    anil.setAge(24);
    anil.showAge();
    return 0;
}