class Employee:
    def __init__(self, name, id):
        self.name = name
        self.id = id

    def calculate_salary(self):
        # Base salary calculation logic
        pass


class Manager(Employee):
    def __init__(self, name, id):
        super().__init__(name, id)
        self.team_size = 0

    def set_team_size(self, team_size):
        self.team_size = team_size

    def calculate_salary(self):
        # Manager-specific salary calculation logic
        base_salary = super().calculate_salary()
        bonus = self.team_size * 1000
        return base_salary + bonus


class Developer(Employee):
    def __init__(self, name, id):
        super().__init__(name, id)
        self.language = ""

    def set_language(self, language):
        self.language = language

    def calculate_salary(self):
        # Developer-specific salary calculation logic
        base_salary = super().calculate_salary()
        bonus = 1000 if self.language == "Python" else 500
        return base_salary + bonus
