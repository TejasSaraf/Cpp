#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Complete the code.
    int a;
    int b;
    int i;
    string n[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    cin >> a;
    cin >> b;

    for (i = a; i <= b; i++)
    {
        if (i <= 9)
        {
            cout << n[i - 1] << endl;
        }
        else
        {
            cout << n[9 + (i % 2)] << endl;
        }
    }

    return 0;
}
