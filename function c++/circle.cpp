//Create a class circle with a private data member radius. Define the member functiona getData and area outside the class.

#include <iostream>
using namespace std;

class Circle {
    double radius;

public:
    void getData();
    double area();
};

void Circle::getData() {
    cout << "Enter radius: ";
    cin >> radius;
}

double Circle::area() {
    return 3.14159 * radius * radius;
}

int main() {
    Circle c;

    c.getData();
    cout << "Area of circle: " << c.area() << endl;

    return 0;
}