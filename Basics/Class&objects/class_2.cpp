// public and private

#include <iostream>
using namespace std;

class room
{
private:
    double length;
    double breadth;
    double height;

public:
    void getData(double len, double brth, double hgt)
    {
        length = len;
        breadth = brth;
        height = hgt;
    }
    double calculateArea()
    {
        return length * breadth;
    }
    double calculateVolume()
    {
        return length * breadth * height;
    }
};

int main()
{
    room room1;

    room1.getData(42.5, 30.8, 19.2);
    cout << "Area of Room = " << room1.calculateArea() << endl;
    cout << "Volume of Room = " << room1.calculateVolume() << endl;
}