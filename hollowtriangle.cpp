#include <iostream>
using namespace std ;
//Develop a program that prints the hollow triangle pattern using a nested for loop
int main(){
    int i ,j,k ;
    for (i = 1; i <= 5; i++)
    {
        for (k = 5; k > i; k--){
            cout << "  ";
        }
        for ( j = 1 ; j<= i ; j++)
        {
            cout << " *  ";
            
        }
        cout << endl;
}
return 0 ;
}