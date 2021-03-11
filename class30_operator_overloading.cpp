#include <iostream>

using namespace std;

class Marks{
    int int_mark, ext_mark;
    public:
    Marks(){
        int_mark = ext_mark = 0;
    }

    Marks(int im, int em){
        int_mark = im;
        ext_mark = em;
    }

    void display(){
        cout << int_mark << endl << ext_mark << endl;
    }

    Marks operator+(Marks m){
        Marks temp;
        // m = m2
        //cout << int_mark << endl;
        //cout << ext_mark << endl;

        temp.int_mark = m.int_mark + int_mark;
        temp.ext_mark = m.ext_mark + ext_mark;
        return temp;
    }
};

int main()
{
    Marks m1(10, 20), m2(30, 40);
    Marks m3 = m1 + m2;
    m3.display();
    return 0;
}
