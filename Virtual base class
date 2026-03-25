#include <iostream>
using namespace std;

class A {
public:
    int x = 5;
};

class B : virtual public A {};
class C : virtual public A {};

class D : public B, public C {
public:
    void show() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    D obj;
    obj.show();
}
