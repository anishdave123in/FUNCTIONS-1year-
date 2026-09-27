//Create a class Employee Store Employee ID  Name  Salary  
#include <iostream>
using namespace std;
class Employee{
    public:
    int emp_id;
    string name;
    float salary;
};
int main(){
    cout<<"Employee details are:"<<endl;
   Employee e1;
   e1.emp_id =101;
   e1.name = "John Doe";
   e1.salary = 50000;
   cout<<"Employee ID: "<<e1.emp_id<<endl;
   cout<<"Employee Name: "<<e1.name<<endl;  
   cout<<"Employee Salary: "<<e1.salary<<endl;

}