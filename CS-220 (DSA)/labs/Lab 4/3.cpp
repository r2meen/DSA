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

    // Store only tridiagonal elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (j == i - 1 || j == i || j == i + 1) {
                U[L] = B[i][j];
                L++;
            }
        }
    }

    cout << "\nArray U containing tridiagonal elements:\n";

    for (int i = 0; i < L; i++) {
        cout << U[i] << " ";
    }

    cout << "\n\nNumber of elements stored: " << L << endl;

    return 0;
}
