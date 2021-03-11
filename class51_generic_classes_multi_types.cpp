#include <iostream>
#include <string>

using namespace std;

template <class T1, class T2> class MyClass {
    T1 p1;
    T2 p2;
    int counter;
    public:
    MyClass(T1 p1, T2 p2) {
        this->p1 = p1;
        this->p2 = p2;
        counter = 100;
    }

    void display(){
        cout << "P1: " << p1 << "; P2: " << p2 << "; counter: " << counter << endl;
    }
};

int main()
{
    MyClass <int, string> infobj(2, "Anil");
    infobj.display();
    return 0;
}