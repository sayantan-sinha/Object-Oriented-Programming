#include <iostream>
#include <string>

using namespace std;

class Person
{
    protected:
    string name;

    public:
    void setName(string iname)
    {
        name = iname;
    }
};

class Student : public Person
{
    /* 
    In Public inher. Public members of Base class act as Public Members of Sub class 
    And Protected members of Base class Protected member of subclass
    */

   public:
   void display()
   {
       cout << "Name: " << name << endl;
   }
};

int main()
{
    Student anil;
    anil.setName("Anil");
    anil.display();
    return 0;
}