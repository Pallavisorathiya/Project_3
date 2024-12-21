#include <iostream>
using namespace std;
// Develop a program that prints the given Custom numeric pattern using a nested for loop
int main() {
    int n = 5; 

    for (int i = n; i >= 1; i--) { 
        for (int j = i; j <= n; j++) { 
            cout << j << " ";
        }
        cout << endl; 
    }

    return 0;
}
