/*
Example:
Input: ‘N’ = 3

Output:

  *
 ***
*****
*****
 ***
  *

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // upper half
    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // lower half
    for (int i = n - 1; i >= 1; i--)
    {
        // spaces
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}