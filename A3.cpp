#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeID;
    string employeeName;
    double employeeSalary;

public:
    void setEmployeeID(int id) {
        employeeID = id;
    }
    int getEmployeeID() {
        return employeeID;
    }
    void setEmployeeName(const string &name) {
        employeeName = name;
    }
    string getEmployeeName() {
        return employeeName;
    }
    void setEmployeeSalary(double salary) {
        employeeSalary = (salary >= 0) ? salary : 0;
    }
    double getEmployeeSalary() {
        return employeeSalary;
    }
    void displayEmployeeDetails() {
        cout << "Employee Details:\n";
        cout << "ID: " << employeeID << "\n";
        cout << "Name: " << employeeName << "\n";
        cout << "Salary: " << employeeSalary << "\n";
    }
};

int main() {
    Employee emp;
    emp.setEmployeeID(101);
    emp.setEmployeeName("John Doe");
    emp.setEmployeeSalary(50000.50);
    emp.displayEmployeeDetails();
    cout << "\nAccessing Individual Attributes:\n";
    cout << "Employee ID: " << emp.getEmployeeID() << "\n";
    cout << "Employee Name: " << emp.getEmployeeName() << "\n";
    cout << "Employee Salary: " << emp.getEmployeeSalary() << "\n";
    return 0;
}