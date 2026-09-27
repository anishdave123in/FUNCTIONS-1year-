//Create a class Circle. Input radius. Calculate Area and Circumference.
#include<iostream>
using namespace std;
class circle{
    public:
    float radius;
    float area;
    float circumference;

};
int main(){
    cout<<"enter radius ";
    circle c1;
    cin>>c1.radius;
    c1.area=3.14*c1.radius*c1.radius;
    c1.circumference=2*3.14*c1.radius;
    cout<<"area of circle: "<<c1.area<<endl;
    cout<<"circumference of circle: "<<c1.circumference<<endl;  




   
}