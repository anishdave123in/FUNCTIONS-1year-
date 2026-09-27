#include <iostream>
using namespace std;    
                             //When return executes, the function stops
int test()
{ 
    return 10;

    cout << "Hello";
} 
int main(){
    
    cout << test() << endl;
}