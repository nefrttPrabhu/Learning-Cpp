#include <bits/stdc++.h>
using namespace std;
class abc {
    int id[100];
    int p[100];
    int c = 0;

public:
    void read();
    void display();
};

void abc::read() {
    cout << "Enter id: ";
    cin >> id[c];
    cout << "Enter price: ";
    cin >> p[c];
    c++;
}

void abc::display() {
    cout << "\nItems in the shop:\n";
    for (int i = 0; i < c; i++) {
        cout << "ID: " << id[i] << " ........... Price: " << p[i] << endl;
    }
}

int main() {
    abc shop;
    int n;
    cout << "Enter the number of items: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        shop.read();
    }
    shop.display();
    return 0;
}
