#include <iostream>

using namespace std;

class Human
{
    public:
    //Static members cannot be initialized inside a class
    static int human_count;

    Human()
    {
        human_count++;
    }

    void human_total()
    {
        cout << "Human count: " << human_count << endl;
    }

    // static method have class scope
    // static methods can only use static variables and no other vars
    static void HumanCount()
    {
        cout << "Human count: " << human_count << endl;
    }
};

int Human::human_count = 0;

int main()
{
    Human anil;
    Human anil2;
    Human anil3;

    Human::HumanCount();
    return 0;
}