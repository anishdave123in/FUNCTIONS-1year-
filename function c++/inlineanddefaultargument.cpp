//wwrite a function to find the cube of a number using inline function and default argument
#include<iostream>
using namespace std;
inline int ques(int num){
    return num*num*num;
}
int main(){
    int num;
    cin>>num;
    cout<<"cube of "<<num<<" is "<<ques(num)<<endl;
    
}