#include <iostream>
using namespace std;
int main() {
int n;
cout << "Enter size of matrix: ";
cin >> n;
int B[10][10];
int U[100];
int L = 0;
cout << "Enter the tridiagonal matrix:\n";
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
cin >> B[i][j];
}
}
// Store only non-zero elements
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
if (B[i][j] != 0) {
U[L] = B[i][j];
L++;
}
}
}
cout << "\nArray U containing non-zero elements:\n";
for (int i = 0; i < n; i++) {
 for(int j = 0; j < n; j++){
 if( j == i - 1){
 cout << U[2 * i - 1] << " ";
 }
 else if( j == i){
 cout << U[2 * i] << " ";
 }
 else if( j == i + 1){
 cout << U[2 * i + 1] << " ";
 }
 else{
 cout << "0 ";
 }
 }
 cout << endl;
 }
 return 0;
}
