class Employee:
    def __init__(self, name, id):
        self.name = name
        self.id = id

    def calculate_salary(self):
        # Base salary calculation logic
        base_salary = self.calculate_base_salary()

        # Additional bonus calculation logic
        bonus = self.calculate_bonus()

        salary = base_salary + bonus
        return salary

    def calculate_base_salary(self):
        # Calculate base salary based on employee's position and experience
        pass

    def calculate_bonus(self):
        # Calculate bonus based on employee's performance or other criteria
        pass


class Manager(Employee):
    def calculate_bonus(self):
        # Calculate bonus for a manager based on specific rules
        pass


class Developer(Employee):
    def calculate_bonus(self):
        # Calculate bonus for a developer based on specific rules
        pass
