#include <bits/stdc++.h>
using namespace std;

class Complex; // Forward declaration ki baad mai use karenge abhi jaan lo ki ye ayega aage

class Cal {
public:
    int add(int a, int b) {
        return (a + b);
    }
    int real(Complex, Complex);
    int comp(Complex, Complex);
};

class MyComplex {
    int a, b; // Private by default
    friend int Cal::real(Complex, Complex); // likhit mai de diye int type ka cal agar call karege real fng ko toh allow kardena 
    friend int Cal::comp(Complex, Complex); // likhit mai de diye int type ka cal agar call karege comp fng ko toh allow kardena 

public:
    void set(int n, int m) {
        a = n;
        b = m;
    }
    void display() {
        cout << a << " + " << b << "i" << endl;
    }
};

int Cal::comp(Complex A, Complex B) //uper define kiya tha idhar bana diya
{
    return (A.b + B.b);
}

int Cal::real(Complex A, Complex B) //uper define kiya tha idhar bana diya
{
    return (A.a + B.a);
}

int main() {
    Complex c1, c2;
    c1.set(1, 2);
    c2.set(3, 4);

    Cal c;
    int real_sum = c.real(c1, c2);
    int comp_sum = c.comp(c1, c2);

    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();

    cout << "Sum of real parts: " << real_sum << endl;
    cout << "Sum of imaginary parts: " << comp_sum << endl;

    return 0;
}
