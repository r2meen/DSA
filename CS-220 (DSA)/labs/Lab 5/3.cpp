#include <iostream>
using namespace std;


bool isSorted(int data[], int n) {
   for (int i = 0; i < n - 1; i++) {
       if (data[i] > data[i + 1])
           return false;
   }


   return true;
}


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


void insertItem(int data[], int &n, int item) {
   int pos = 0;
   // Find correct position
   while (pos < n && data[pos] < item) {
       pos++;
   }


   // Shift elements to the right
   for (int i = n; i > pos; i--) {
       data[i] = data[i - 1];
   }
   data[pos] = item;
   n++;
}


int main() {
   int n;
   int data[100];
   cout << "Enter number of elements: ";
   cin >> n;
   while (true) {
       cout << "Enter " << n << " elements:\n";


       for (int i = 0; i < n; i++) {
           cin >> data[i];
       }


       if (isSorted(data, n)) {
           break;
       }


       cout << "\nArray is not sorted.";
       cout << "\nPlease enter the elements again.\n\n";
   }


   cout << "\nSorted array: ";
   for (int i = 0; i < n; i++) {
       cout << data[i] << " ";
   }


   char choice;


   do {
       int item;


       cout << "\n\nEnter item to search: ";
       cin >> item;


       int result = binarySearch(data, n, item);


       if (result != -1) {
           cout << "Item found at index " << result << ".";
       }
       else {
           cout << "Item not found.";
           cout << "\nInserting " << item << " into the array...";
           insertItem(data, n, item);
           cout << "\nUpdated sorted array: ";
           for (int i = 0; i < n; i++) {
               cout << data[i] << " ";
           }
       }
       cout << "\n\nSearch again? (y/n): ";
       cin >> choice;


   } while (choice == 'y' || choice == 'Y');


   return 0;
}
