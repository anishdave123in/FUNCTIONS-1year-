//wap to crete a function that accespt an int by reference and increase its value by 20 and display value before and after the value
//write a class employee with data members e.id,e.salary now define all member functions outside the class scope resolution operator accept details and display details and increase salary by 10% 
#include <iostream>
using namespace std;
int increase_salary(int &salary)
{
    cout << "Salary before increase: " << salary << endl;
    salary += 20;
    cout << "Salary after increase: " << salary << endl;
    return salary;
}
int main(){
    int salary;
    cout << "Enter salary: ";
    cin >> salary;
    increase_salary(salary);
    return 0;
}


#include <iostream>
using namespace std;    
     