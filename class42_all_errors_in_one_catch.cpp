#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    try{
        throw runtime_error("Runtime Error");
    } catch(...) {
        cout << "Some exception occured" << endl;
    }
    return 0;
}
