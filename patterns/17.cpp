/*
Example:
Input: ‘N’ = 3

Output:
    A
  A B A
A B C B A

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int j;
        // spaces
        for (j = n; j > i; j--)
        {
            cout << "  ";
        }
        // left
        for (j = 1; j <= i; j++)
        {
            cout << char(64 + j) << " ";
        }
        // right
        for (j = j - 2; j >= 1; j--)
        {
            cout << char(64 + j) << " ";
        }
        cout << endl;
    }
    return 0;
}