#include <iostream>
#include <string>

class Animal {
protected:
    int energy;

public:
    // Constructor with default energy value
    Animal() : energy(50) {}

    // Sleep function
    void sleep() {
        std::cout << "I'm sleeping" << std::endl;
        energy += 1;
    }

    // Eat function
    void eat() {
        std::cout << "I'm eating" << std::endl;
        energy += 1;
    }

    // GetEnergy function
    int getEnergy() const {
        return energy;
    }
};

class Dog : public Animal {
private:
    std::string name;

public:
    // Constructor
    Dog(const std::string& n) : name(n) {}

    // Bark function
    void bark() {
        std::cout << "Bark!" << std::endl;
        energy -= 1;
    }

    // Run function
    void run() {
        std::cout << "Running!" << std::endl;
        energy -= 3;
    }
};

int main() {
    Dog dog1("Max");

    for (int i = 4; i < 9; i++) {
        dog1.sleep();
        dog1.run();
    }

    dog1.eat();
    dog1.bark();
    std::cout << dog1.getEnergy() << std::endl;

    return 0;
}
