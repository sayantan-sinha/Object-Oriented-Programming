#include <iostream>

using namespace std;

// Anon namespace doesn't span across files, i.e local to a file

namespace {
    int x; 
    void display(){
        cout << "x is " << x << endl;
    }
}

namespace {
    void display_2() {
        cout << "I am another display function but part of previous namespace" << endl;
    }
}

int main()
{
    x = 25;
    display();
    display_2();
    return 0;
}
