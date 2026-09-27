#include<iostream>
using namespace std;    

int subtraction(int a,int b){  //function definition
    return a-b;
}
int main(){
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"subtraction of two numbers is "<<subtraction(a,b)<<endl;
   
    return 0;
}
