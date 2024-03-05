#include <iostream>
#include <string>

class Animal {
private:
    int energyN;

public:
    // Constructor with default energy value
    Animal() : energyN(50) {}

    // Sleep function
    void sleepN() {
        std::cout << "I'm sleeping" << std::endl;
        energyN += 1;
    }

    // Eat function
    void eatN() {
        std::cout << "I'm eating" << std::endl;
        energyN += 1;
    }

    // GetEnergy function
    int getEnergyN() const {
        return energyN;
    }
};

class Dog : public Animal {
private:
    std::string nameN;

public:
    // Constructor
    Dog(const std::string& name) : nameN(name) {}

    // Bark function
    void barkN() {
        std::cout << "Bark!" << std::endl;
        energyN -= 1;
    }

    // Run function
    void runN() {
        std::cout << "Running!" << std::endl;
        energyN -= 3;
    }
};

int main() {
    Dog dog1N("Max");

    for (int i = 4; i < 9; i++) {
        dog1N.sleepN();
        dog1N.runN();
    }

    dog1N.eatN();
    dog1N.barkN();
    std::cout << dog1N.getEnergyN() << std::endl;

    return 0;
}
