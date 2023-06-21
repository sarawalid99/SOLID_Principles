- The Interface Segregation Principle (ISP) is a software design principle that states that clients should not be forced to depend on interfaces they do not use. 
- It encourages the creation of specific interfaces for different clients instead of having a single large interface that caters to all clients. 
- This principle aims to reduce the dependencies and coupling between classes/interfaces, promote modularity, and improve maintainability.
#
- In the examples, we have an Employee base class that represents common employee attributes.
- Instead of having a single large interface or class for salary and bonus calculation, we create separate interfaces/classes SalaryCalculator and BonusCalculator.
- The SalaryCalculator interface provides a calculate_salary() method, and the BonusCalculator interface provides a calculate_bonus() method.
- The Manager and Developer classes implement the Employee base class, and separate classes ManagerSalaryCalculator, DeveloperSalaryCalculator, ManagerBonusCalculator,
  and DeveloperBonusCalculator provide specific implementations for the salary and bonus calculations.
- This way, each client (manager or developer) only depends on the interfaces they need, and unnecessary dependencies are avoided.
