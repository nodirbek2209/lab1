#include <iostream>

class Timer {
private:
    int hoursN;
    int minutesN;
    int secondsN;

public:
    // Constructor to initialize time according to rules
    Timer(int hours, int minutes, int seconds) {
        hoursN = hours % 24;
        minutesN = minutes % 60;
        secondsN = seconds % 60;
    }

    // Function to print time in the format h:m:s
    void printTime() {
        std::cout << hoursN << ":" << minutesN << ":" << secondsN << std::endl;
    }
};

int main() {
    int hours, minutes, seconds;

    // Input hours, minutes, and seconds from the user
    std::cout << "Enter hours: ";
    std::cin >> hours;
    std::cout << "Enter minutes: ";
    std::cin >> minutes;
    std::cout << "Enter seconds: ";
    std::cin >> seconds;

    // Create an instance of the Timer class
    Timer timerN(hours, minutes, seconds);

    // Print the time in the specified format
    std::cout << "Time: ";
    timerN.printTime();

    return 0;
}
