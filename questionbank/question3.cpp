//Write a program to swap two numbers using Call by Value,Call by Reference,Call by Address.Compare the outputs. 
#include <iostream>
using namespace  std;
void Usingvalue(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void Usingrefrence(int &a,int &b){
    int temp;
    temp=a;
    a =b;
    b=temp;
}
void Usingaddress(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    cout<<"enter two number:";
    cin>>a>>b;
    cout<<"original variable"<<a<<""<<b<<endl;
    Usingvalue(a,b);
    cout<<"after call by value"<<a<<" "<<b<<endl;
    Usingrefrence(a,b);
    cout<<"after call by reference"<<a<<""<<b<<endl;
    Usingaddress(&a,&b);
    cout<<"after call by address"<<a<<""<<b;
    return 0;
}