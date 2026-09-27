#include<iostream>
using namespace std;
int number(int x){       //This is the default way of passing values, Because the function receives a copy of a.
    x=300;
}
int main(){
    int a=34;
    number(a);
    cout<<"value of a is "<<a<<endl;
}