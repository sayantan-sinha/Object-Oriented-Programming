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

    void operator+=(int m){
        mark += m;
    }

    friend void operator+=(int &x, Marks m);

    friend void operator-=(Marks &curObj, int redmark);
};

void operator+=(int &x, Marks m){
    x+=m.mark;
}

void operator-=(Marks &curObj, int redmark){
    curObj.mark -= redmark;
}

int main()
{
    int x=15;
    Marks m(76);
    m+=20;
    m.YourMark();
    m-=20;
    m.YourMark();
    x+=m;
    cout << "X = " << x << endl;
    return 0;
}