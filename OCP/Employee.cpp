#include <iostream>

class Employee {
protected:
    std::string name;
    int id;

public:
    Employee(const std::string& name, int id) : name(name), id(id) {}

    double calculateSalary() {
        double baseSalary = calculateBaseSalary();
        double bonus = calculateBonus();

        double salary = baseSalary + bonus;
        return salary;
    }

    virtual double calculateBaseSalary() = 0;
    virtual double calculateBonus() = 0;
};

class Manager : public Employee {
public:
    Manager(const std::string& name, int id) : Employee(name, id) {}

    double calculateBaseSalary() override {
        // Calculate base salary for a manager based on specific rules
        return 5000;
    }

    double calculateBonus() override {
        // Calculate bonus for a manager based on specific rules
        return 0.1 * calculateBaseSalary();
    }
};

class Developer : public Employee {
public:
    Developer(const std::string& name, int id) : Employee(name, id) {}

    double calculateBaseSalary() override {
        // Calculate base salary for a developer based on specific rules
        return 3000;
    }

    double calculateBonus() override {
        // Calculate bonus for a developer based on specific rules
        return 0.05 * calculateBaseSalary();
    }
};
