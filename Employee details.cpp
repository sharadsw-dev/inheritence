#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;
public:
    void getData() {
        cout << "Enter name and id: ";
        cin >> name >> id;
    }
};

class Salary : public Employee {
protected:
    int basic = 10000;
};

class Bonus : public Salary {
public:
    void display() {
        int total = basic + 2000;
        cout << "Name: " << name << endl;
        cout << "Total Salary: " << total << endl;
    }
};

int main() {
    Bonus b;
    b.getData();
    b.display();
}
