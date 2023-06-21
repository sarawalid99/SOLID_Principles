#include <iostream>
#include <vector>

class Employee {
public:
    virtual ~Employee() {}
    virtual double calculateSalary() = 0;
};

class Manager : public Employee {
public:
    double calculateSalary() override {
        // Manager-specific salary calculation logic
        double baseSalary = 5000;
        double bonus = 2000;
        return baseSalary + bonus;
    }
};

class Developer : public Employee {
public:
    double calculateSalary() override {
        // Developer-specific salary calculation logic
        double baseSalary = 4000;
        double bonus = 1000;
        return baseSalary + bonus;
    }
};

double calculateTotalSalary(const std::vector<Employee*>& employees) {
    double totalSalary = 0;
    for (Employee *employee : employees) {
        totalSalary += employee->calculateSalary();
    }
    return totalSalary;
}

int main() {
    Manager manager;
    Developer developer;
    std::vector<Employee*> employees = {&manager, &developer};

    double totalSalary = calculateTotalSalary(employees);
    std::cout << "Total Salary: " << totalSalary << std::endl;

    return 0;
}
