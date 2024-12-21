#include <iostream>
using namespace std;
// Develop a program that prints the given Right half triangle pattern using a nested for loop. 
int main() {
    int start = 41; 
    int rows = 5;  

    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < i; j++) {
            cout << start + j << " ";
        }
        cout << endl; 
    }

    return 0;
}
