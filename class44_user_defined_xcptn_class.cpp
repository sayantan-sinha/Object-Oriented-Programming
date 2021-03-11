#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class OverSpeed : public exception {
    int speed;
    public:
    string what() {
        return "Check your car speed";
    }    

    void getSpeed() {
        cout << "Your speed is: " << speed << endl;
    }

    void setSpeed(int speed) {
        this->speed = speed;
    }
};

class Car{
    int speed;
    public:
    Car(){
        speed = 0;
        cout << "Speeed is " << speed << endl;
    }

    void accelerate(){
        for(;;){
            speed += 10;
            cout << "Speeed is " << speed << endl;
            if (speed >= 250){
                OverSpeed obj;
                obj.setSpeed(speed);
                throw obj;
            }
        }
    }
};

int main()
{
    Car car_obj;
    try{
        car_obj.accelerate();
    } catch(OverSpeed err) {
        cout << err.what() << endl;
        err.getSpeed();
    }
    return 0;
}