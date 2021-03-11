#include <iostream>

using namespace std;

template <typename T> void display(T, int);

int main()
{
    display("AIB", 4);
    return 0;
}

template <typename T> void display(T x, int y){
    for(int i=0; i<y; i++)
        cout << x << endl;
}
