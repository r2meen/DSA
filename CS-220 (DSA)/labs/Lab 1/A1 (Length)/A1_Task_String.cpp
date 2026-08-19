#include <iostream>
using namespace std;

int myLength(string s)
{
    int len = 0, i = 0;

    cout << "Enter a string: ";
    getline(cin, s);

    while (s[i] != '\0')
    {
        len = len + 1;
        i = i + 1;
    }
    return len;
}

int main()
{
    string s;
    int result = myLength(s);
    cout << "String count: " << result << endl;
    return 0;
}