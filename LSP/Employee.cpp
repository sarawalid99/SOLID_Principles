#include <iostream>

class Employee {
protected:
    std::string name;
    int id;

public:
    Employee(const std::string& name, int id) : name(name), id(id) {}

    virtual double calculateSalary() {
        // Base salary calculation logic
        return 0.0;
    }
};

class Manager : public Employee {
private:
    int teamSize;

public:
    Manager(const std::string& name, int id) : Employee(name, id), teamSize(0) {}

    void setTeamSize(int teamSize) {
        this->teamSize = teamSize;
    }

    double calculateSalary() override {
        // Manager-specific salary calculation logic
        double baseSalary = Employee::calculateSalary();
        double bonus = teamSize * 1000;
        return baseSalary + bonus;
    }
};

class Developer : public Employee {
private:
    std::string language;

public:
    Developer(const std::string& name, int id) : Employee(name, id), language("") {}

    void setLanguage(const std::string& language) {
        this->language = language;
    }

    double calculateSalary() override {
        // Developer-specific salary calculation logic
        double baseSalary = Employee::calculateSalary();
        double bonus = (language == "Cpp") ? 1000 : 500;
        return baseSalary + bonus;
    }
};

