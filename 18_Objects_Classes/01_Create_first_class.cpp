#include <iostream>
using namespace std;

class Car{
public:
    string name;
    int price;
    string type;
    
};

int main()
{
    Car c1;
    c1.name = "Honda city";
    c1.price = 1500000;
    c1.type = "Sedan";

    Car c2;
    c2.name = "Maruti Swift";
    c2.price = 700000;
    c2.type = "Hatchback";

    cout <<c1.name <<" "<<c1.price<<" "<<c1.type<<endl;
    cout <<c2.name <<" "<<c2.price<<" "<<c2.type<<endl;

    return 0;
}