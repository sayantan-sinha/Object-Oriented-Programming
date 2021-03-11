#include <iostream>
#include <string>

using namespace std;

class Human
{
    private:
        int age;
        string name;

    public:
        Human()
        {
            cout << "Default Constructors" << endl;
            age = 0;
            name = "Noname";
        }

        Human(string iname)
        {
            cout << "Constructor with name as param" << endl;
            age = 0;
            name = iname;
        }

        Human(int iage)
        {
            cout << "Constructor with age as param" << endl;
            age = iage;
            name = "Noname";
        }

        Human(string iname, int iage)
        {
            cout << "Constructor with name and age as param" << endl;
            age = iage;
            name = iname;
        }

        void display()
        {
            cout << "Name: " << name << " Age: " << age << endl;
        }
};

int main()
{
    Human anil;
    anil.display();

    Human andy("Andy");
    andy.display();

    Human ron("Ron", 23);
    ron.display();

    return 0;
}