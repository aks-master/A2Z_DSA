/*
Example:
Input: ‘N’ = 4

Output:

4444444
4333334
4322234
4321234
4322234
4333334
4444444

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int size = 2 * n - 1;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            int minDist = min(min(i - 1, j - 1), min(size - i, size - j)); //  distance from the 4 borders (top: i, left: j, bottom: size-i, right: size-j ), then take minimum
            cout << n - minDist;
        }
        cout << endl;
    }
    return 0;
}
