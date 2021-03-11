#include<iostream>
#include<string>

using namespace std;

class HumanBeing
{
    public:
    string name;
    void introduce()
    {
        cout << "I am " << name << endl;
    }
};

int main()
{
    HumanBeing sany;

    sany.name = "Sayantan";
    sany.introduce();
    return 0;
}