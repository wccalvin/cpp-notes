## What is OOP?
* Object Oriented Programming is a programming paradigm.
* The intent is to provide clear structure for programs
* Keep the code easier to maintain and modify (DRY - Don't Repeat Yourself)

## What is an Object?
* Objects are independent units.
* It has it's own identity
	* It is possible to have two similar objects, but they are still unique

## What is a Class?
* Objects are created using classes
* Class describes what an object will be or it can be referred as an object's blueprint
* Each class has a name, attributes (properties or data) and behaviors (methods)

## Abstraction
Data abstraction is a concept of providing only essential information. It is the process of representing essential features without including implementation details.

Example: The user needs to know that the car's steering is essential to control the direction of the car. The tech behind how it works (implementation) is hidden to the user.

## Encapsulation
* It simply means, combining attributes (data) and behavior (method) together in a class.
* It also means restricting access to the inner workings of that class (data hiding)

## Class members

The components of the class are called class members. There are two types of class
members,

- **Attributes** are variables defined in the class.
- **Methods** are functions that belong in the class.

## Access Specifiers

_Access specifiers_ provides the control access for class members. It determines the
scope of class attributes and methods.

### Private

By default all class members are declared `private`. They are not accessible from outside
the class.

- Everything declared under `private:` keyword is private.
- Declare class attributes as `private` whenever possible.

### Public

The `public` access specifier provides access to members outside the class.

### Protected

It works much like private access specifier, but allows inherited classes to access those
class members.

## Accessor Function

An _accessor function_, also known as a "getter" function is a public function that
returns the value of a `private` member variable.

- accessor function has the same data type as the member variable.

## Mutator Function

A _mutator function_, also known as a "setter" function is a public function that sets
the value of a `private` member variable.

- mutator function usually have `void` as the data type.

## Constructors

A constructor in C++ is a special kind of method that is called automatically when the
class is instantiated. Constructors are used to initialize class attributes and perform
any setup work.

- Note: **Constructor** has the same name as the class and it has no return type (not even void).

### Types of Constructors

- Default constructor - It takes no parameters.
- Constructor with parameters.
- Constructor with default parameters.

### Member initializer list

The constructor examples shown [here](../17-oop-constructors/main.cpp) has been assigning
values instead of initializing them. That becomes a problem when using `const` or `references`.

```c++
#include <string>

class Book {
  private:
    const std::string title;
    const int pages;

  public:
    Book() {
      title = "Atomic Habits";  // Error: const variable cannot be reassigned
      pages = 280;  // Error: const variables cannot be reassigned
    }
};
```

To solve this problem C++ has member initializer list. See usage below.

```c++
#include <string>

class Book {
  private:
    const std::string title;
    const int pages;

  public:
    Book() {
      : title("Atomic Habits"), pages(280) {}  // member initializer list
    }
}
```

### Destructor

Destructor is another special class which is automatically called when the object is
destroyed.

## Inheritance

Inheritance is the concept of defining class abstraction to take advantage of reusability
to avoid repeatability of code.

- base class: also called as parent class. The class being inherited from.
- derived class: also called as child class. The class that inherits from base class.

### Constructor inheritance

This is a more realistic use-case than using public access specifier. The derived class
also inherits constructors of its base class using the members initializer list.

### Polymorphism

Polymorphism allows a derived class to override the methods from its base class.
