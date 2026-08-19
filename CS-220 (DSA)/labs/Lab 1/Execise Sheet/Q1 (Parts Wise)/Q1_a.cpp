#include <iostream>
#include <string>
#include <chrono>

using namespace std;

int myfunc(char s[])
{
    int len = 0, i = 0;

    cout << "Enter the sentence: ";
    cin.getline(s, 50);

    while (s[i] != '\0')
    {
        len++;
        i++;
    }
    return len;
}

int main()
{
    char s[50];

    int result = myfunc(s);

    cout << "Character length: " << result << endl;
}