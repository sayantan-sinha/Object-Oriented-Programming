#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a = 5, b = 0;
    int c;
    try{
        if(b==0)
            throw "Divide By Zero Error";
        c = a/b;
        cout << c << endl;
    } catch(const char *e) {
        cout << "Exception occured" << endl << e;
    }
    return 0;
}