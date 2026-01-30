#include <iostream>
using namespace std;

// Base Class with Virtual Inheritance
class RBI {
public:
    virtual void displayRate() { cout << "RBI Base Rate" << endl; }
    virtual ~RBI() {} // Virtual destructor is crucial
};

// Derived Classes using Virtual Inheritance
class SBI : virtual public RBI {
public:
    void displayRate() override { cout << "SBI Rate: 5%" << endl; }
};

class Axis : virtual public RBI {
public:
    void displayRate() override { cout << "Axis Rate: 6%" << endl; }
};

class ICICI : virtual public RBI {
public:
    void displayRate() override { cout << "ICICI Rate: 5.5%" << endl; }
};

int main() {
    // 1 Reference variable (pointer) of base class
    RBI* r;

    // Use polymorphism to access derived methods
    r = new SBI();
    r->displayRate();
    delete r; // Clean up memory

    r = new Axis();
    r->displayRate();
    delete r;

    r = new ICICI();
    r->displayRate();
    delete r;

    return 0;
}