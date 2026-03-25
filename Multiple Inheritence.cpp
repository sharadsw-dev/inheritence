#include <iostream>
using namespace std;

class Marks {
public:
    int m = 90;
};

class Sports {
public:
    int s = 85;
};

class Result : public Marks, public Sports {
public:
    void show() {
        cout << "Total Score: " << m + s << endl;
    }
};

int main() {
    Result r;
    r.show();
}
