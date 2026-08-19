#include <iostream>
#include <chrono>
#include <cstring>

using namespace std;

int myLength(char s[])
{
    int len = 0, i = 0;
    cout << "Enter a character: ";
    cin.getline(s, 100);

    while (s[i] != '\0')
    {
        len++;
        i++;
    }
    return len;
}

int main()
{
    char s[100];
    int result = myLength(s);
    cout << "Character Count Is: " << result << endl;

    auto start = chrono::high_resolution_clock ::now();
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);

    cout << "Execution Time: " << duration.count() << " microseconds" << endl;
}