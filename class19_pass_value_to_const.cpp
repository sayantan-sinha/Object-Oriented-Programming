#include <iostream>
#include <string>

using namespace std;

class Father
{
    protected:
    int height;

    public:
    Father(int h)
    {
        cout << "Constructor of Father class " << endl;
        height = h;
    }
};

class Mother
{
    protected:
    string skincolor;
    
    public:
    Mother(string color)
    {
        cout << "Constructor of Mother class" << endl;
        skincolor = color;
    }
};

class Child : public Father, public Mother
{
    public:
    // Calling and passing x to super class constructor
    Child(int x, string color) : Father(x), Mother(color)
    {
        cout << "Child class constructor" << endl;
    }

    void display()
    {
        cout << "Height is " << height << "ft and skin color is " << skincolor << endl;
    }
};

int main()
{
    Child anil(6, "White");
    anil.display();
    return 0;
}
