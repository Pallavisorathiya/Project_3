#include <iostream>
using namespace std;
//Develop a program that prints the given pattern using a nested for loop. 
int main() {
    int n = 5; 

    for (int i = 1; i <= n; i++) { 
        
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; 
        }
       
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl; 
    }

    return 0;
}
