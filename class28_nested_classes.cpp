#include<iostream>
#include<string>

using namespace std;

class Person
{
    public:
    string name;
    class Address{
        public:
        string country;
        string stname;
        int hno;
    };

    Address addr;
    void PrintAddr(){
        cout << name << endl << addr.country << endl << addr.stname << endl << addr.hno << endl;
    }
};

int main()
{
    Person anil;
    anil.name = "Anil";
    anil.addr.country = "India";
    anil.addr.stname = "SSRoad";
    anil.addr.hno = 66;
    anil.PrintAddr();

    //Address ad; // This is invalid. Address not declared in this scope
    Person :: Address ad;
    return 0;
}