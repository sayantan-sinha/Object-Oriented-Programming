#include <iostream>

using namespace std;

// template <class> -- same
// template <typename identifier> ret_type func_name(parameters)

template <typename myType> void display(myType x){
    cout << "You have passed " << x << endl;
}

int main()
{
    display("Anil shetty rocks");
    return 0;
}