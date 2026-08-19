#include <iostream>
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

    cout << "Total Character Count is: " << result << endl;

    return 0;
}