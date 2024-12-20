/*
Example 1:
Input:N = 12345
Output:5
Explanation:  The number 12345 has 5 digits.
Example 2:
Input:N = 7789
Output: 4
Explanation: The number 7789 has 4 digits.

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int num2 = num;
    int digit_counts = 0;
    while (num2 > 0)
    {
        num2 = num2 / 10;
        digit_counts++;
    }
    if (num == 0)
        digit_counts = 1;
    cout << digit_counts;
    return 0;
}