#include <iostream>

using namespace std;

class Marks{
    int mark;
    public:
    Marks(){
        mark = 0;
    }

    Marks(int m){
        mark = m;
    }

    void YourMark(){
        cout << "Your marks is " << mark << endl;
    }

    // int is used to depict postfix behaviour
    Marks operator++(int){
        Marks duplicate(*this);
        mark += 1;
        return duplicate;
    }

    friend Marks operator--(Marks &m, int);
};

Marks operator--(Marks &m, int){
    Marks duplicate(m);
    m.mark += 1;
    return duplicate;
}

int main()
{
    Marks obj(50);
    obj.YourMark();
    (obj++).YourMark();
    obj.YourMark();
    (obj--).YourMark();
    obj.YourMark();
    return 0;
}