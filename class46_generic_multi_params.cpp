#include <iostream>

using namespace std;

template <typename T> void display(T, T);
template <class T> T maxm(T, T);

int main()
{
    display(2, 4);
    display("Anil", "Anjali");
    cout << maxm(20, 30) << endl;
    cout << maxm(20.256, 30.897) << endl;
    return 0;
}

template <typename T> void display(T x,T y){
    cout << x << " and " << y << endl;
}

template <class T> T maxm(T x, T y){
    return (x > y) ? x : y;
}
