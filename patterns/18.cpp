/*
Example:
Input: ‘N’ = 3

Output:
C
C B
C B A

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
            cout << char(65 + n - j) << " ";
        }
        cout << endl;
    }
    return 0;
}