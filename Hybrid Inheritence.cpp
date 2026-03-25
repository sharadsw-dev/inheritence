#include <iostream>
using namespace std;

class A {
public:
    int x = 10;
};

class B : public A {};
class C : public A {};

class D : public B, public C {
public:
    void show() {
        cout << "Ambiguity avoided using scope: " << B::x << endl;
    }
};

int main() {
    D obj;
    obj.show();
}
