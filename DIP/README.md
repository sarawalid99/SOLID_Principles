- The Dependency Inversion Principle (DIP) is a software design principle that states that high-level modules/classes should not depend on low-level modules/classes.
  Instead, both should depend on abstractions.
- This principle aims to decouple modules and promote code reusability, maintainability, and testability.
#
- In the examples, The Employee class defines an abstract base class, which serves as the abstraction that higher-level modules can depend on.
- The Manager and Developer classes inherit from the Employee base class and provide their own implementations of the calculate_salary() method.
- The SalaryCalculator class depends on the Employee abstraction.
    - It accepts an Employee object as a dependency and uses its calculate_salary() method without being coupled to any specific subclass.
- The calculate_total_salary() function, which performs the salary calculation, operates on a list of Employee objects.
    - It only requires the abstraction (Employee) and is not concerned with the specific subclasses.
#
- In all three examples, the high-level modules (such as SalaryCalculator or the calculate_total_salary() function) depend on the abstraction 
(Employee interface or base class) and are decoupled from the specific implementations (Manager and Developer). 
- This allows for flexibility, extensibility, and easier maintenance as the code can work with different employee types by simply implementing the abstraction
