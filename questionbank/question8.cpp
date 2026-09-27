//Create a class Rectangle put Length  Breadth  Calculate Area and Perimeter
#include<iostream>
using namespace std;
class rectangle{
    public:
    float length;
    float breadth;
    float area;
    float perimeter;
   
};
  int main(){
    cout<<"rectangle details"<<endl;
    cout<<"enter length ";
    rectangle r1;
    cin>>r1.length;
    cout<<"enter breadth ";
    cin>>r1.breadth;
r1.area=r1.length*r1.breadth;
r1.perimeter=2*(r1.length+r1.breadth);
cout<<"area of rectangle is:"<<r1.area<<endl;   
cout<<"perimeter of rectangle is:"<<r1.perimeter<<endl;

}