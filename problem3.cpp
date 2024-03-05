#include <iostream>
#include <string>
#include <vector>
#include <map>

class Student {
private:
    std::string nameN;
    long int idN;
    std::string groupNameN;

public:
    // Constructor
    Student(const std::string& name, long int id, const std::string& groupName) : nameN(name), idN(id), groupNameN(groupName) {}

    // Getter method for group name
    std::string getGroupNameN() const {
        return groupNameN;
    }
};

void printStudentsByGroup(const std::vector<Student>& students) {
    std::map<std::string, int> groupCount;

    // Count students in each group
    for (const auto& student : students) {
        groupCount[student.getGroupNameN()]++;
    }

    // Print number of students in each group in alphabetical order
    for (const auto& pair : groupCount) {
        std::cout << pair.first << ":" << pair.second << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter the number of students: ";
    std::cin >> n;

    std::vector<Student> students;

    std::string name, groupName;
    long int id;

    // Input student details and store them in vector
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter student " << i + 1 << " details (name id groupName): ";
        std::cin >> name >> id >> groupName;
        students.push_back(Student(name, id, groupName));
    }

    // Print number of students in each group
    printStudentsByGroup(students);

    return 0;
}
