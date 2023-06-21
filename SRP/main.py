class Employee:
    def __init__(self, name, id):
        self.name = name
        self.id = id

    def calculate_salary(self):
        # Salary calculation logic based on employee's experience and position
        experience = self.get_experience()
        position = self.get_position()

        if position == "Manager":
            base_salary = 5000
        elif position == "Developer":
            base_salary = 3000
        else:
            base_salary = 2000

        salary = base_salary + (experience * 100)
        return salary

    def get_experience(self):
        # Fetch employee's experience from the database
        # For demonstration purposes, let's assume it returns a random value
        return 5

    def get_position(self):
        # Fetch employee's position from the database
        # For demonstration purposes, let's assume it returns a random position
        return "Developer"

    def save_to_database(self):
        # Saving employee data to the database
        # For demonstration purposes, let's assume it prints the employee's details
        print(f"Saving {self.name} ({self.id}) to the database.")
