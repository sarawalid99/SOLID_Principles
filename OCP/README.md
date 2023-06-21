- The Open/Closed Principle (OCP) is a software design principle that states that software entities (classes, modules, functions, etc.) should be open for extension
  but closed for modification.
- It means that the behavior of a software entity can be extended without modifying its existing code.
- This principle promotes code reuse, maintainability, and scalability.
#
- In the examples the Employee class is abstract and provides the general structure for calculating salary.
  The calculateBaseSalary() and calculateBonus() methods are abstract, which means the concrete subclasses (Manager and Developer) must provide their own implementations.
  This way, the Employee class is closed for modification, and new roles can be introduced by extending the Employee class.
