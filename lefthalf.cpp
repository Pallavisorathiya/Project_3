#include <iostream>
using namespace std;
// Develop a program that prints the given Inverted Left half triangle pattern using a nested for loop
int main() {
    int rows = 5; 
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << "  "; 
        }
    for (int j = 1; j <= rows - i; ++j) {
            if (j % 2 == 1)
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl; 
}

    return 0;
}
