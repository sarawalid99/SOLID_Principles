class Employee:
    def __init__(self, name, id):
        self.name = name
        self.id = id


class Manager(Employee):
    def calculate_salary(self):
        # Manager-specific salary calculation logic
        base_salary = 5000
        bonus = 2000
        return base_salary + bonus


class Developer(Employee):
    def calculate_salary(self):
        # Developer-specific salary calculation logic
        base_salary = 4000
        bonus = 1000
        return base_salary + bonus


def calculate_total_salary(employees):
    total_salary = 0
    for employee in employees:
        total_salary += employee.calculate_salary()
    return total_salary


manager = Manager("John Doe", 1)
developer = Developer("Jane Smith", 2)
employees = [manager, developer]

total_salary = calculate_total_salary(employees)
print("Total Salary:", total_salary)
