#include <iostream>
#include <string>

using namespace std;

template <class T1 = string, class T2 = int> class MyClass {
    T1 p1;
    T2 p2;
    public:
    MyClass(T1 p1, T2 p2) {
        this->p1 = p1;
        this->p2 = p2;
    }

    void display() {
        cout << "P1: " << p1 << "; P2: " << p2 << endl;
    }
};

int main()
{
    MyClass <int, string> obj(20, "Anil");
    obj.display();

    MyClass <> obj2("HDR", 40);
    obj2.display();
    
    return 0;
}