#include <iostream>

class Employee {
private:
    std::string name;
    int id;

public:
    Employee(const std::string& name, int id) : name(name), id(id) {}

    double calculateSalary() {
        // Salary calculation logic based on employee's experience and position
        int experience = getExperience();
        std::string position = getPosition();

        double baseSalary;
        if (position == "Manager") {
            baseSalary = 5000;
        } else if (position == "Developer") {
            baseSalary = 3000;
        } else {
            baseSalary = 2000;
        }

        double salary = baseSalary + (experience * 100);
        return salary;
    }

private:
    int getExperience() {
        // Fetch employee's experience from the database
        // For demonstration purposes, let's assume it returns a random value
        return 5;
    }

    std::string getPosition() {
        // Fetch employee's position from the database
        // For demonstration purposes, let's assume it returns a random position
        return "Developer";
    }

public:
    void saveToDatabase() {
        // Saving employee data to the database
        // For demonstration purposes, let's assume it prints the employee's details
        std::cout << "Saving " << name << " (" << id << ") to the database." << std::endl;
    }
};


