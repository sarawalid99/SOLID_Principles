class Employee:
    def __init__(self, name, id):
        self.name = name
        self.id = id


class SalaryCalculator:
    def calculate_salary(self, employee):
        # Base salary calculation logic
        pass


class BonusCalculator:
    def calculate_bonus(self, employee):
        # Bonus calculation logic
        pass


class Manager(Employee):
    def __init__(self, name, id):
        super().__init__(name, id)


class Developer(Employee):
    def __init__(self, name, id):
        super().__init__(name, id)


class ManagerSalaryCalculator(SalaryCalculator):
    def calculate_salary(self, manager):
        # Manager-specific salary calculation logic
        pass


class DeveloperSalaryCalculator(SalaryCalculator):
    def calculate_salary(self, developer):
        # Developer-specific salary calculation logic
        pass


class ManagerBonusCalculator(BonusCalculator):
    def calculate_bonus(self, manager):
        # Manager-specific bonus calculation logic
        pass


class DeveloperBonusCalculator(BonusCalculator):
    def calculate_bonus(self, developer):
        # Developer-specific bonus calculation logic
        pass
