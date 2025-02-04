//OOP
// Object-oriented programming (OOP) is a programming paradigm that uses objects, 
//which are instances of classes, to perform operations and interact with each other.


//Classes and Objects
// A class is a user-defined data type that we can use in our program, and it works as an object constructor,

#include <iostream>
using namespace std;

class Dog {
public:
    string name;
    int age;

    void bark() {
        cout << name << " barks!" << endl;
    }
};

Dog myDog;
myDog.name = "Fido";
myDog.age = 3;
myDog.bark(); // Output: Fido barks!

//Encapsulation
// Encapsulation is an object-oriented programming concept that binds together the data and functions that manipulate the data,

// Private = only accessible within the class
// Protected = accessible in the class and its child classes
// Public = accessible from outside the class

class Dog {
private:
    string name;
    int age;

public:
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void bark() {
        cout << name << " barks!" << endl;
    }
};

Dog myDog;
myDog.setName("Fido");
myDog.age(3); // Error: 'int Dog::age' is private within this context


//Inheritance
// Inheritance is a mechanism in which one class acquires the properties and behavior of another class.

class Animal {
public:
    void breathe() {
        cout << "I can breathe" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks!" << endl;
    }
};

Dog myDog;
myDog.breathe(); // Output: I can breathe
myDog.bark(); // Output: Dog barks!


//Polymorphism
// Polymorphism is a feature of object-oriented programming that allows us to perform a single action in different ways.

class Animal {
public:
    virtual void makeSound() {
        cout << "The Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows!" << endl;
    }
};

//prinsip polymorphism sendiri adalah ketika kita membuat sebuah fungsi yang sama namun memiliki beberapa implementasi yang berbeda