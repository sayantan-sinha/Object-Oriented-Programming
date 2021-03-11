/* [], (), -> : these 3 operators can be overloaded only by 
1. Non static member function
2. Cannot be friend function
*/

#include <iostream>

using namespace std;

class Marks {
    int mark;
    public:
    Marks(int m){
        mark = m;
    }

    void YourMark() {
        cout << "Your marks is " << mark << endl;
    }

    Marks operator()(int mk){
        mark = mk;
        return *this;
    }

};

int main()
{
    Marks obj(85);
    obj.YourMark();
    obj(44);
    obj.YourMark();
    return 0;
}