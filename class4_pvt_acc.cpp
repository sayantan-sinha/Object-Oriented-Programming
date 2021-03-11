#include<iostream>

using namespace std;

class Human
{
    private:
    int age;
    int get_age()
    {
        return age-5;
    }


    public:
    void display_age()
    {
        cout << "Age: " << get_age() << endl;
    }

    void set_age(int value)
    {
        age = value;
    }
};

int main()
{
    Human anil;
    // anil.age = 25; // This won't work. Only class methods can access Private variables
    anil.set_age(25);
    anil.display_age();
    return 0;
}