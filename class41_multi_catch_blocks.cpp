#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    try{
        //throw "some exception";
        //throw 20;
        throw runtime_error("Runtime Error");
    } catch (const char *err) {
        cout << err << endl;
    } catch (const char *err) {
        cout << err << endl;
    } catch (runtime_error err) {
        cout << err.what() << endl;
    }
}