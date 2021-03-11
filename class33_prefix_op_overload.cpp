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

    void operator++(){
        mark++;
    }

    friend void operator--(Marks &m);
};

void operator--(Marks &m){
    m.mark--;
}

int main()
{
    Marks obj(50);
    obj.YourMark();
    ++obj;
    obj.YourMark();
    --obj;
    obj.YourMark();
    return 0;
}