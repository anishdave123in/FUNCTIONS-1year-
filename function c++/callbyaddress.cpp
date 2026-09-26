#include<iostream>
using namespace std;
int main(){ 
int a=5;
int *p=&a;  //*p is called deference operator and &a is called address operator
cout<<&a<<"\n";
cout<<p<<"\n";
cout<<*p<<"\n";  
int **q=&p;  //**q is called double deference operator and &p is called address operator
cout<<&p<<"\n";
cout<<q<<"\n";
cout<<*q<<"\n";
cout<<**q<<"\n";

}
