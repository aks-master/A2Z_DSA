/*
Example:
Input: ‘N’ = 3

Output:

1
0 1
1 0 1

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int d = i % 2;
        for (int j = 1; j <= i; j++)
        {
            cout << d;
            d = d == 0 ? 1 : 0;
        }
        cout << endl;
    }
    return 0;
}