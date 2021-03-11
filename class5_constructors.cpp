#include<iostream>
#include<string>

using namespace std;

class Human
{
private:
    string name;
    int age;
public:
    Human()
    {
        name = "Noname";
        age = 25;
        cout << "I am a constructor" << endl;
    }

    void display()
    {
        cout << "Name: " << name << " Age: " << age << endl;
    }
};

int main()
{
    Human anil;
    //anil.Human(); // This is invalid
    anil.display();
    return 0;
}