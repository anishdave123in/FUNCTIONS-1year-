
// Create a class square containing the private data member side.Define the member function calculate area outside the class as inline function.
#include <iostream>
using namespace std;

class square{
    int side;
    public:
   int calculateArea();
};

int square::calculateArea(){
    return side*side;
}
int main(){
    int side;
    cout << "Enter side length: ";
    cin >> side;

    Square sq(side);

    cout << "Area of square: " << sq.calculateArea() << endl;

    return 0;
}