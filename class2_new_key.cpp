#include<iostream>

using namespace std;

class Human
{
    public:
    string name;

    void introduce()
    {
        cout << "Hi I am " << name << endl;
    }

};

int main()
{
    Human anil; // object strored in stack
    anil.name = "Anil";
    anil.introduce();

    Human *sany = new Human(); // with new keyword, object stored in heap
    sany -> name = "Sayantan";
    sany -> introduce();
    return 0;
}