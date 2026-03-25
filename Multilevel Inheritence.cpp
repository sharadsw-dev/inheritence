#include <iostream>
using namespace std;

class Student {
protected:
    int roll;
public:
    void getRoll() {
        cout << "Enter roll: ";
        cin >> roll;
    }
};

class Exam : public Student {
protected:
    int m1, m2;
public:
    void getMarks() {
        cout << "Enter 2 marks: ";
        cin >> m1 >> m2;
    }
};

class Result : public Exam {
public:
    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Total: " << m1 + m2 << endl;
    }
};

int main() {
    Result r;
    r.getRoll();
    r.getMarks();
    r.display();
}
