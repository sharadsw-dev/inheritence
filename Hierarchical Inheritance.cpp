#include <iostream>
using namespace std;

class Person {
public:
    string name = "Sharad";
};

class Student : public Person {
public:
    void showStudent() {
        cout << "Student: " << name << endl;
    }
};

class Teacher : public Person {
public:
    void showTeacher() {
        cout << "Teacher: " << name << endl;
    }
};

int main() {
    Student s;
    Teacher t;
    s.showStudent();
    t.showTeacher();
}
