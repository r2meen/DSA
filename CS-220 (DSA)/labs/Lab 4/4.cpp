#include <iostream>
using namespace std;


int main() {
   int n;
   cout << "Enter size of matrix: ";
   cin >> n;
   int U[100];
   int size = 3 * n - 2;
   cout << "Enter " << size << " elements of U:\n";


   for (int i = 0; i < size; i++) {
       cin >> U[i];
   }


   cout << "\nRetrieved tridiagonal matrix B:\n";


   for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {


           if (j == i - 1) {
               // Lower diagonal
               cout << U[2 * i - 1] << " ";
           }
           else if (j == i) {
               // Main diagonal
               cout << U[2 * i] << " ";
           }
           else if (j == i + 1) {
               // Upper diagonal
               cout << U[2 * i + 1] << " ";
           }
           else {
               cout << "0 ";
           }
       }
       cout << endl;
   }
   return 0;
}
