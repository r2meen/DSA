#include <iostream>
#include <chrono>
#include <string>

using namespace std;

string myFunc(string s1, string s2)
{
    int i = s1.length();
    int j = s2.length();

    int count = 0;

    while (count < j)
    {
        s1 += s2[count];
        count++;
    }

    return s1;
}
int main()
{
    string s1, s2;
    cout << "Enter String (S1): ";
    cin >> s1;

    cout << "Enter String (S2): ";
    cin >> s2;

    string result = myFunc(s1, s2);

    cout << "Concatenation Of S1 + S2: " << s1 + s2 << endl;

    auto start = chrono::high_resolution_clock ::now();
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);

    cout << "Execution Time: " << duration.count() << " nanoseconds" << endl;
    return 0;
}