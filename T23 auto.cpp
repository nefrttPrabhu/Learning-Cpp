#include <bits/stdc++.h>
using namespace std;

class abc {
    string s; 
public:
    void read();
    void check();
    void flip();
    void display();
};

void abc::read() 
{
    cout << "Enter the binary number: ";
    cin >> s;
}

void abc::check() 
{
    for (auto c : s) //idhar auto& isliye imp nhi tha coz we are not change the original value we are just getting values and checking them
    {
        if (c != '0' && c != '1') {
            cout << "Invalid binary number!" << endl;
            exit(0); 
        }
    }
}

void abc::flip() 
{
    for (auto& c : s) // here it was imp to write auto& coz we will be getting original value's addy so we can now change the original values
    {
        if (c == '0') 
            c = '1';
        else
            c = '0';
        }
}


void abc::display() {
    cout << "Flipped binary number: " << s << endl;
}

int main() {
    abc a;
    a.read();
    a.check();
    a.flip();
    a.display();
    return 0;
}
