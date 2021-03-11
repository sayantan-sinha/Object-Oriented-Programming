// aka Explicit Specialisation
#include <iostream>

using namespace std;

template <typename T> void func_name(T);
void func_name(int);

int main()
{
    func_name(23.456);
    func_name("Hey there");
    func_name(4);
    return 0;
}

template <typename T> void func_name(T x) {
    cout << "Inside func_name generic function" << endl;
    cout << "x = " << x << endl;
}

// template <> void func_name <int> (int x)
void func_name(int x) {
    cout << "Inside func_name normal function" << endl;
    cout << "x = " << x << endl;
}
