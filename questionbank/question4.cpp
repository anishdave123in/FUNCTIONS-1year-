//FIND THE LARGEST THREE NUMBERS USING FUNCTION
#include <iostream>
using namespace std;
int largest(int a,int b,int c){
    if(a>=b && a>=c)
        return a;
    else if(b>=a && b>=c)
     return b;
    else
     return c; 
}
    int main(){
        int a,b,c;
        cout<<"enter the numbers :";
        cin>>a>>b>>c;
        cout<<"largest numbers are: "<<largest(a,b,c);
        return 0;
    }
