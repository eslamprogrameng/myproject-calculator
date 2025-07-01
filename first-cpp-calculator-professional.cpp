# MyProject Calculator

This is an **Advanced Calculator** project built using **C++** and **Object-Oriented Programming (OOP)**.

> 📚 Created as part of *Course 10* by Engineer **Mohamed Abu-Hadhod**.

---

## 🧮 Features

- Basic arithmetic operations: `+`, `-`, `*`, `/`
- Advanced operations: Power, Square root, etc.
- Clean object-oriented design
- Easy to extend and maintain

---

## 🚀 How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/YOUR_USERNAME/myproject-calculator.git
   





// main.cpp
#include <iostream>
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
};

int main() {
    Calculator calc;
    double x = 10, y = 5;

    cout << "Add: " << calc.add(x, y) << endl;
    cout << "Subtract: " << calc.subtract(x, y) << endl;
    cout << "Multiply: " << calc.multiply(x, y) << endl;
    cout << "Divide: " << calc.divide(x, y) << endl;

    return 0;
}
