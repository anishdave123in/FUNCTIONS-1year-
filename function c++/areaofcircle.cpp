#include <iostream>
using namespace std;

class Circle
{
    double r;

public:
    Circle(double radius);
    double area();
};

// Constructor definition
Circle::Circle(double radius)
{
    r = radius;
}
// Member function definition
double Circle::area()
{
    return 3.14 * r * r;
}
int main()
{
    Circle c(7);
    cout << "Area of Circle = " << c.area() << endl;
    return 0;
}