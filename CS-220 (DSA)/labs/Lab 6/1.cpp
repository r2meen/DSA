#include <iostream>
using namespace std;
class stack {
private:
 int size, top, *arr;
public:
 stack(int s) {
 size = s;
 top = -1;
 arr = new int[size];
 }
 ~stack() {
 delete[] arr;
 }
 void push(int item) {
 if (top == size - 1) {
 cout << "Overflow!" << endl;
 return;
 }
 top++;
 arr[top] = item;
 }
 int pop() {
 if (top == -1) {
2
 cout << "Underflow!" << endl;
 return -1;
 }
 int temp;
 temp = arr[top];
 top--;
 return temp;
 }
 int peek() {
 if (top == -1) {
 cout << "Stack is empty!" << endl;
 return -1;
 }
 return arr[top];
 }
 bool isFull() {
 return top == size - 1;
 }
 bool isEmpty() {
 return top == -1;
 }
 void display() {
 if (isEmpty()) {
 cout << "Stack is empty!" << endl;
 return;
 }
3
 cout << "Stack elements: ";
 for (int i = top; i >= 0; i--) {
 cout << arr[i] << " ";
 }
 cout << endl;
 }
};
int main() {
 stack s(5);
 s.push(10);
 s.push(20);
 s.push(30);
 s.push(40);
 s.display();
 cout << "Top element: " << s.peek() << endl;
 cout << "Popped element: " << s.pop() << endl;
 s.display();
 cout << "Is stack empty? "
 << (s.isEmpty() ? "Yes" : "No") << endl;
 cout << "Is stack full? "
 << (s.isFull() ? "Yes" : "No") << endl;
 return 0
}
