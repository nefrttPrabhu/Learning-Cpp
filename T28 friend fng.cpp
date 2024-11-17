#include <bits/stdc++.h>
using namespace std;

class Complex; // Forward declaration of Complex class

class Cal {
public:
    int add(int a, int b) {
        return a + b;
    }
    int real(Complex, Complex);
    int comp(Complex, Complex);
};

class Complex {
    int a, b; // Real and imaginary parts

    // Grant access to Cal class methods
    friend int Cal::real(Complex, Complex);
    friend int Cal::comp(Complex, Complex);

public:
    void set(int n, int m) {
        a = n;
        b = m;
    }
    void display() const {
        cout << a << " + " << b << "i" << endl;
    }
};

// Member function of Cal to compute the sum of imaginary parts
int Cal::comp(Complex A, Complex B) {
    return A.b + B.b;
}

// Member function of Cal to compute the sum of real parts
int Cal::real(Complex A, Complex B) {
    return A.a + B.a;
}

int main() {
    Complex c1, c2,c3;

    // Set values for c1 and c2
    c1.set(1, 2);
    c2.set(3, 4);

    Cal c;

    // Compute the sum of real and imaginary parts
    int real_sum = c.real(c1, c2);
    int comp_sum = c.comp(c1, c2);
    c3.set(real_sum,comp_sum);
    // Display the results
    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();
    cout << "Sum of real parts: " << real_sum << endl;
    cout << "Sum of imaginary parts: " << comp_sum << endl;
    cout << "Complex number after sum: ";
    c3.display();
    
    return 0;
}
