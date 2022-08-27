# Object Oriented Programming (OOP)

_Object oriented programming_ is a paradigm which allows to package both data, functions
and ability to store and modify the states of the data.

## Classes

_classes_ are blue print for objects. A semi-colon is required to terminate the class.

```c++
class ClassName {
  // abstraction here...
};
```

## Class members

The components of the class are called class members. There are two types of class
members,

- **Attributes** are variables defined in the class.
- **Methods** are functions that belong in the class.

## Objects

**Objects** are instances of the class. Creating an object is very similar to creating
a variable.

```c++
ClassName instance;

// set the attributes
instance.x = "xyz";

// calling methods
instance.method();
```

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
