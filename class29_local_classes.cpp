#include <iostream>
#include <string>

using namespace std;

void studentList()
{
    class Student{
        public:
        string name;
        int age;

        void display(){
            cout << name << endl << age << endl;
        }
    };

    Student std;
    std.name = "Anil";
    std.age = 24;
    std.display();
}

int main()
{
    studentList();
    return 0;
}