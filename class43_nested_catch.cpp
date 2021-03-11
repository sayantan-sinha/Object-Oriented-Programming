#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    try{
        
        try {
            throw "A character exception";
        } catch(const char *e) {
            cout << "Character type in inner block --> " << e << endl;
            cout << "Rethrowing exception" << endl;
            throw;
        }

    } catch (const char *e) {
        cout << "Character type in outer block --> " << e << endl;
    } catch (...) {
        cout << "Unexcepted exception in outer block" << endl;
    }
    return 0;
}