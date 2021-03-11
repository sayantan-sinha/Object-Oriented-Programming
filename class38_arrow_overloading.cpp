/* [], (), -> : these 3 operators can be overloaded only by 
1. Non static member function
2. Cannot be friend function
*/

/* Restrictions of operator overloading: 
    1. Cannot operator precedance
    2. Cannot increase number of operands an operator takes (Decrease allowed)
    3. ? :: . * These operators can't be overloaded
    4. Operator overloading can be inherited by derived classes
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

    Marks *operator->(){
        return this;
    }
};

int main()
{
    Marks obj(85);
    obj.YourMark();
    //Or 
    obj->YourMark();
    return 0;
}