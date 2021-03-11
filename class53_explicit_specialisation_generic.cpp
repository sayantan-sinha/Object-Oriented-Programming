#include <iostream>

using namespace std;

template <class T> class MyClass {
    T p;
    public:
    MyClass(T p) {
        cout << "Generic class constructor" << endl;
        this->p = p;
    }

    void display() {
        cout << "P: " << p << endl;
    }
};

// int class is overidden
template <> class MyClass <int> {
    int p;
    public:
    MyClass(int p) {
        cout << "Overidden int class constructor" << endl;
        this->p = p;
    }

    void display() {
        cout << "P: " << p << endl;
    }
};

int main()
{
    MyClass <string> ob1("Anil");
    ob1.display();
    
    MyClass <int> ob2(32);
    ob2.display();
    return 0;
}