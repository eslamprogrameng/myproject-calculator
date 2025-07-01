#advanced_calculator.cpp


#include <iostream>
#include <cmath>  // لدوال القوة والجذر التربيعي
using namespace std;

class Calculator {
public:
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) {
        if (b != 0) return a / b;
        cout << "Error: Division by zero!" << endl;
        return 0;
    }

    double power(double base, double exponent) {
        return pow(base, exponent);
    }

    double squareRoot(double value) {
        if (value >= 0) return sqrt(value);
        cout << "Error: Negative input for square root!" << endl;
        return 0;
    }
};

int main() {
    Calculator calc;
    double x = 10, y = 5;

    cout << "Add: " << calc.add(x, y) << endl;
    cout << "Subtract: " << calc.subtract(x, y) << endl;
    cout << "Multiply: " << calc.multiply(x, y) << endl;
    cout << "Divide: " << calc.divide(x, y) << endl;

    cout << "Power: " << calc.power(x, y) << endl;            // 10^5
    cout << "Square Root: " << calc.squareRoot(x) << endl;    // sqrt(10)

    return 0;
}
