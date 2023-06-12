#include <iostream>
#include <string>

class Employee {
public:
    Employee(std::string name, int id, double salary)
    : name_(name), id_(id), salary_(salary) {}

    std::string GetName() const { return name_; }
    int GetId() const { return id_; }
    double GetSalary() const { return salary_; }

private:
    std::string name_;
    int id_;
    double salary_;
};

int main() {
    Employee emp1("Alice", 1, 5000.00);
    Employee emp2("Bob", 2, 6000.00);
  
    std::cout << "Employee: " << emp1.GetName() << ", ID: " << emp1.GetId()
              << ", Salary: " << emp1.GetSalary() << std::endl;

    std::cout << "Employee: " << emp2.GetName() << ", ID: " << emp2.GetId()
              << ", Salary: " << emp2.GetSalary() << std::endl;
  
    return 0;
}

