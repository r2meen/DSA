

#include <iostream>

using namespace std;

void display(int arr[], int n)
{
    cout << "Array: ";
    for(int i = 0; i < n; i++)
    {     
        cout << " " << arr[i] ;
    }
}

int insert(int arr[], int size, int element, int index, int capacity){
    if(size >= capacity){
        cout << "Array Is Full" << endl;
        return -1;
    }
    else if(index < 0 || index > size){
        cout << "Position Is Invalid" << endl;
        return 2;
    }

for(int i = size -1; i >= index; i--){
    arr[i + 1] = arr[i];
}
arr[index] = element;

    cout << "Insertion Is Successful" << endl;
    return 1;

}

int main(){

    int arr[100] = {55, 66, 24, 290, 445};
    int size = 5;
    int element = 45;
    int index = 3;
    int capacity = 100;

    insert(arr, size, element, index, capacity);

    size += 1;

    display(arr, size);
}
