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

    Marks operator++(){
        mark++;
        return *this;
    }

    friend Marks operator--(Marks &m);
};

Marks operator--(Marks &m){
    m.mark--;
    return m;
}

int main()
{
    Marks obj(50);
    obj.YourMark();
    (++obj).YourMark();
    (--obj).YourMark();
    return 0;
}