/*
Example:
Input: ‘N’ = 3

Output:

A B C
A B
A

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(64 + j) << " ";
        }
        cout << endl;
    }
    return 0;
}