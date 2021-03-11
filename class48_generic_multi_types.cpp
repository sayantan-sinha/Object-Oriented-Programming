#include <iostream>

using namespace std;

template <typename T1, typename T2> void display(T1, T2);

int main(){
    display("anil", 24);
    display(65,24.66);
    return 0;
}

template <typename T1, typename T2> void display(T1 x, T2 y){
    cout << x << " and " << y << endl;
}