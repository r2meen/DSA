#include <iostream>
using namespace std;


int main() {
   int n;


   cout << "Enter size of matrix: ";
   cin >> n;


   int A[10][10];
   int U[100];
   int k = 0;


   cout << "Enter the lower triangular matrix:\n";


   for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           cin >> A[i][j];


           // Store only lower triangular elements
           if (i >= j) {
               U[k] = A[i][j];
               k++;
           }
       }
   }


   cout << "\nStored array U: ";
   for (int i = 0; i < k; i++) {
       cout << U[i] << " ";
   }


   // Retrieve matrix
   cout << "\n\nRetrieved matrix:\n";


   for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           if (i >= j) {
               // Formula for lower triangular storage
               int index = i * (i + 1) / 2 + j;
               cout << U[index] << " ";
           }
           else {
               cout << "0 ";
           }
       }
       cout << endl;
   }


   return 0;
}
