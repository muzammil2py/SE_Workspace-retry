#include <iostream>
using namespace std;

// Base class
class shape {
public:
    float a, b;
};

// Virtual inheritance prevents duplicate 'a' and 'b' variables
class input : virtual public shape {
public:
    void inputval() {
        cout << "Enter value for a (length/radius): ";
        cin >> a;
        cout << "Enter value for b (width/height): ";
        cin >> b;
    }
};

// Rectangle inherits from both Shape and Input
class rectangle : virtual public shape, public input {
public:
    void aofr() {
        cout << "Area of rectangle: " << a * b << endl;
    }
};

class circle : virtual public shape, public input {
public:
    void aofc() {
        float pi = 3.14;
        cout << "Area of circle (using a as radius): " << pi * a * a << endl;
    }
};

class triangle : virtual public shape, public input {
public:
    void soft() {
        cout << "Area of triangle: " << (a * b) / 2 << endl;
    }
};

int main() {
    // We create a "Master" object or individual objects 
    // that inherit the input capability.
    
    rectangle r; 
    r.inputval(); // Input ONCE into the rectangle object
    
    // Now 'r' has the values and can calculate:
    r.aofr();
    
    // If you want one single input for ALL shapes, 
    // you would typically use a single object that inherits from everything,
    // or pass the values by reference.
    
    return 0;
}
