#include <iostream>
#include <cstring>

using namespace std;

void myfunc(char s1[], char s2[])
{
    int i, j, count = 0;

    i = strlen(s1);
    j = strlen(s2);

    while (count <= j)
    {
        s1[i] = s2[count];
        i++;
        count++;
    }
    s1[i] = '\0';
    
}

int main()
{
    char s1[100], s2[100];

    cout << "Enter the first sentence (s1): ";
    cin.getline(s1, 100);

    cout << "Enter the second sentence (s2): ";
    cin.getline(s2, 100);

    myfunc(s1,s2);
    cout << "Concatenated (S1+S2): " << s1 << endl;
    return 0;
}
