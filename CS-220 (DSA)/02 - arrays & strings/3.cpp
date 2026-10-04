// Insertion At The End

#include <iostream>

using namespace std;

void display(int arr[], int n){
    cout << "Array: ";
    for(int i = 0; i < n; i++){
        cout << " " << arr[i];
    }
}

int insert_at_end(int arr[], int element, int index, int capacity, int size){
    if(size >= capacity){
        cout << "Array Is Full!" << endl;
        return -1;
    }
    else if(size < 0 || index > size){
        cout << "Insertion Not Possible" << endl;
        return -2;
    }

    arr[index] = element;
    cout << "Insertion is possible!" << endl;
    return 1;

}

int main(){
    int arr[100] = {1, 3, 9, 5, 6};
    int size = 6;
    int index = 5;
    int capacity = 100;
    int element = 90;

    insert_at_end(arr, element, index, capacity, size);

    size += 1;

    display(arr, size);
}
