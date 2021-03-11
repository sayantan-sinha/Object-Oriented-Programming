#include<iostream>
#include<string>

using namespace std;

class Human
{
    public:
    string name;
    // string name = "Noname" --> This initialisation is valid
    void introduce();
};

// string Human :: name = "Noname" // Not allowed for normal variables. Only static properties of classes can be initialised this way

void Human :: introduce()
{
    cout << "Hi I am " << Human :: name << endl;
}

int main()
{
    Human anil;
    anil.name = "Anil";
    anil.introduce();
    return 0;
}