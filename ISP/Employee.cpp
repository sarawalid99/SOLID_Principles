#include<iostream>

class Employee {
public:
    virtual ~Employee() {}
    virtual std::string getName() = 0;
    virtual int getId() = 0;
};

class SalaryCalculator {
public:
    virtual ~SalaryCalculator() {}
    virtual double calculateSalary(Employee* employee) = 0;
};

class BonusCalculator {
public:
    virtual ~BonusCalculator() {}
    virtual double calculateBonus(Employee* employee) = 0;
};

class Manager : public Employee {
private:
    std::string name;
    int id;

public:
    Manager(const std::string& name, int id) : name(name), id(id) {}

    std::string getName() override {
        return name;
    }

    int getId() override {
        return id;
    }
};

class Developer : public Employee {
private:
    std::string name;
    int id;

public:
    Developer(const std::string& name, int id) : name(name), id(id) {}

    std::string getName() override {
        return name;
    }

    int getId() override {
        return id;
    }
};

class ManagerSalaryCalculator : public SalaryCalculator {
public:
    double calculateSalary(Employee* employee) override {
        // Manager-specific salary calculation logic
        return 0.0;
    }
};

class DeveloperSalaryCalculator : public SalaryCalculator {
public:
    double calculateSalary(Employee* employee) override {
        // Developer-specific salary calculation logic
        return 0.0;
    }
};

class ManagerBonusCalculator : public BonusCalculator {
public:
    double calculateBonus(Employee* employee) override {
        // Manager-specific bonus calculation logic
        return 0.0;
    }
};

class DeveloperBonusCalculator : public BonusCalculator {
public:
    double calculateBonus(Employee* employee) override {
        // Developer-specific bonus calculation logic
        return 0.0;
    }
};
