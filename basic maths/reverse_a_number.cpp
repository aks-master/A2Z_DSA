/*
Example 1:
Input:N = 12345
Output:54321
Explanation: The reverse of 12345 is 54321.
Example 2:
Input:N = 7789
Output: 9877
Explanation: The reverse of number 7789 is 9877.

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int num2 = 0;
    while (num > 0)
    {
        num2 = num2 * 10 + num % 10;
        num /= 10;
    }
    cout << num2;
    return 0;
}