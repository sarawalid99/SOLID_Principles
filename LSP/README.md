- The Liskov Substitution Principle (LSP) is a software design principle that states that objects of a superclass should be replaceable
  with objects of its subclasses without affecting the correctness of the program.
- In other words, a subclass should be able to be substituted for its superclass without breaking the functionality of the program.
- This principle ensures that the behavior of the base class is preserved in its derived classes.

#
- In the examples, we have an Employee base class with a calculate_salary() method. The Manager and Developer classes inherit from the Employee class and
  provide their own implementations of the calculate_salary() method, specific to their roles.
- The Liskov Substitution Principle is upheld since both subclasses can be substituted for the Employee base class without breaking the behavior of the program.
