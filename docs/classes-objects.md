# Object Oriented Programming (OOP)

*Object oriented programming* is a paradigm which allows to package both data, functions
and ability to store and modify the states of the data.

## Classes

*classes* are blue print for objects. A semi-colon is required to terminate the class.

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

*Access specifiers* provides the control access for class members. It determines the
scope of class attributes and methods.

### Private

By default all class members are declared `private`. They are not accessible from outside
the class.

- Everything declared under `private:` keyword is private.
- Declare class attributes as `private` whenever possible.

### Public

 The `public` access specifier provides access to members outside the class.
