/* [], (), -> : these 3 operators can be overloaded only by 
1. Non static member function
2. Cannot be friend function
*/

#include <iostream>

using namespace std;

class Marks{
    int subjects[3];
    public:
    Marks(int sub1, int sub2, int sub3){
        subjects[0] = sub1;
        subjects[1] = sub2;
        subjects[2] = sub3;
    }

    int operator[](int pos){
        return subjects[pos];
    }
};

int main()
{
    Marks obj(23, 44, 33);
    cout << obj[0] << endl << obj[1] << endl << obj[2] << endl;
    return 0;
}