#include <iostream>
#include <string>

using namespace std;

template <class MyType> class MyClass {
    MyType p1, p2;
    public:
    MyClass(MyType x, MyType y) {
        p1 = x;
        p2 = y;
    }
    void display() {
        cout << "P1: " << p1 << "; P2: " << p2 << endl;
    }
};

int main()
{
    MyClass <int> intObj(2, 3);
    MyClass <string> strObj("Anil", "Anshu");
    intObj.display();
    strObj.display();
}