#include <iostream>
#include <string>

using namespace std;

class Human
{
    string *name;
    int *age;

    public:
    Human(string iname, int iage)
    {
        name = new string;
        age = new int;

        *name = iname;
        *age = iage;
    }

    void display()
    {
        cout << "Name: " << *name << " Age: " << *age << endl;
    }

    ~Human()
    {
        delete name;
        delete age;
        cout << "Memory released" << endl;
    }
};

int main()
{
    Human *anil = new Human("Anil", 21);
    anil -> display();

    delete anil;
    return 0;
}
