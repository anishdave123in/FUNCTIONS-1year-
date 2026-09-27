//Create a class SimpleInterest Input.Principal,Rate,Time.Calculate Simple Interest.
 #include <iostream>
using namespace std;
class simple_interest{
    public:
    float principal, rate, time, simple_interest;
};
int main(){
    cout<<"enter principal ";
    simple_interest si;
    cin>>si.principal;
    cout<<"enter rate ";
    cin>>si.rate;
    cout<<"enter time ";
    cin>>si.time;
    si.simple_interest = (si.principal * si.rate * si.time) / 100;
    cout<<"Simple Interest: "<<si.simple_interest<<endl;

}
