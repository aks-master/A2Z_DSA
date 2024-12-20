/*
Example:
Input: ‘N’ = 3

Output:

1         1
1 2     2 1
1 2 3 3 2 1

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // left
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        // spaces
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << "  ";
        }
        // right
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}