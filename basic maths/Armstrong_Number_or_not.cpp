/*
Example 1:
Input:N = 153
Output:True
Explanation: 1 + 125 + 27 = 153
Example 2:
Input:N = 371
Output: True
Explanation: 27 + 343 + 1 = 371

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int num2 = 0, num3 = num, d;
    while (num > 0)
    {
        d = num % 10;
        num2 += d * d * d;
        num /= 10;
    }
    if (num2 == num3)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}