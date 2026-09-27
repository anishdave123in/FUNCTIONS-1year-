//Create a class Student having Name  Roll Number,Branch. Input and display student details. 
#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll_no;
    string branch;
};
int main(){
    Student s;
    cout<<"Enter a name:";
    cin>>s.name;
    cout<<"Enter a roll number:";
    cin>>s.roll_no;
    cout<<"Enter a branch:";
    cin>>s.branch;
    cout<<"Student Details:"<<endl;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll Number: "<<s.roll_no<<endl;
    cout<<"Branch: "<<s.branch<<endl;
}