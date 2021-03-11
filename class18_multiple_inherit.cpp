#include <iostream>
#include <string>

using namespace std;

class Father
{
    public:
    int height;
    void askFather()
    {
        cout << "I'm your Father" << endl;
    }
};

class Mother
{
    public:
    string skincolor;
    void askMother()
    {
        cout << "I'm your Mother" << endl;
    }
};

class Child : public Father, public Mother
{
    public:
    void askParents()
    {
        cout << "Asking my parents" << endl;
    }

    void setColorHeight(string icolor, int iheight)
    {
        skincolor = icolor;
        height = iheight;
    }

    void display()
    {
        cout << "Height is " << height << "ft and color is " << skincolor << endl;
    }
};

int main()
{
    Child anil;
    anil.setColorHeight("White", 6);
    anil.display();
    anil.askFather();
    anil.askMother();
    return 0;
}