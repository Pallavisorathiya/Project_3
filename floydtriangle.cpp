#include <iostream>
using namespace std;
//Develop a program that prints the given Floyd’s triangle pattern using a nested for loop.
int main() {
    int start = 11; 
    int rows = 4;   
    int num = start;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl; 
    }

    return 0;
}
