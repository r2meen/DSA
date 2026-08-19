#include <iostream>
#include <string>
#include <chrono>

using namespace std;

char myfunc(char s1[], char s2[])
{
    int len = 0, i = 0;

    cout << "Enter the first string (s1): ";
    cin.getline(s1, 50);
    cin.ignore();

    cout << "Enter the first string (s2): ";
    cin.getline(s2, 50);

    while (s1 != '\0' || s2 != '\0')
    {
        len++;
        i++;
    }

    return len;
}

int main()
{
    char s1[50], s2[50];

    int result = myfunc(s1, s2);

    cout << "Character length: " << result << endl;
}