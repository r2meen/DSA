// Insertion At A Position

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

int insert(int arr[], int size, int element, int capacity, int pos)
{
    if(size >= capacity)
    {
        return -1;
    }

    for(int i = size - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos] = element;

    return 1;
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};

    int size = 5;
    int element = 45;
    int pos = 3;

    insert(arr, size, element, 100, pos);

    size += 1;

    display(arr, size);

    return 0;
}
