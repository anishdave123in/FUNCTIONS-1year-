//Write a program to calculate the sum of two numbers using a user-defined function.
#include <iostream>
using namespace std;
int sum (int a, int b) {
    return a + b;
}
int main(){
    int a,b;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    cout<<"sum of two numbers is: "<<sum(a,b);
    return 0;
}
 