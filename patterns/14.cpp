/*
Example:
Input: ‘N’ = 3

Output:

A
A B
A B C

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(64 + j) << " ";
        }
        cout << endl;
    }
    return 0;
}