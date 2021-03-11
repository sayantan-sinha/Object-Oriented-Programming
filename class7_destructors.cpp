#include <iostream>

using namespace std;

class Human
{
    public:
    Human()
    {
        cout << "Constructors called" << endl;
    }

    ~Human()
    {
        cout << "Destructors called" << endl;
    }
};

int main()
{
    Human *anil;
    anil = new Human();

    delete anil; //Without this line Destructor isn't called
    return 0;
}