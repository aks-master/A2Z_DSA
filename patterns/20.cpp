/*
Example:
Input: ‘N’ = 3

Output:
*         *
* *     * *
* * * * * *
* *     * *
*         *

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
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        // spaces till mid
        for (int j = n; j > i; j--)
        {
            cout << "  ";
        }
        // right
        for (int k = n; k > i; k--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {

            cout << "* ";
        }
        cout << endl;
    }
    // lower half
    for (int i = n - 1; i >= 1; i--)
    {
        // left
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        // spaces till mid
        for (int j = n; j > i; j--)
        {
            cout << "  ";
        }
        // right
        for (int k = n; k > i; k--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {

            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}