#include <iostream>
using namespace std;


int binarySearch(int data[], int n, int item) {
   int beg = 0;
   int end = n - 1;
   while (beg <= end) {
       int mid = (beg + end) / 2;


       if (data[mid] == item)
           return mid;


       if (item < data[mid])
           end = mid - 1;
       else
           beg = mid + 1;
   }
   return -1;
}


int main() {
   int n;


   cout << "Enter number of elements: ";
   cin >> n;


   int data[100];


   cout << "Enter sorted array:\n";
   for (int i = 0; i < n; i++) {
       cin >> data[i];
   }


   char choice;


   do {
       int item;


       cout << "\nEnter item to search: ";
       cin >> item;


       int result = binarySearch(data, n, item);


       if (result != -1)
           cout << "Item found at index " << result << endl;
       else
           cout << "Item not found." << endl;


       cout << "Search again? (y/n): ";
       cin >> choice;


   } while (choice == 'y' || choice == 'Y');


   return 0;
}
