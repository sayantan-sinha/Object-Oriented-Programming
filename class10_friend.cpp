#include <iostream>
#include <string>

using namespace std;

class Human
{
    string name;
    int age;

    public:
    Human(string iname, int iage)
    {
        name = iname;
        age = iage;
    }
    
    // To access private members from outside the class, i.e non-members of the class
    friend void display(Human man);
};

void display(Human man)
{
    cout << "Name: " << man.name << endl << "Age: " << man.age << endl;
}

int main()
{
    Human anil("Anil", 24);
    display(anil);
    return 0;
}