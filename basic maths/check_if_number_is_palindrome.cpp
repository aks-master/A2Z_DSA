/*
Example 1:
Input:N = 4554
Output:Palindrome Number
Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number
Example 2:
Input:N = 7789
Output: Not Palindrome
Explanation: The reverse of number 7789 is 9877 and therefore it is not palindrome

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int num2 = 0, num3 = num;
    while (num > 0)
    {
        num2 = num2 * 10 + num % 10;
        num /= 10;
    }
    if (num2 == num3)
    {
        cout << "Palindrome Number";
    }
    else
    {
        cout << "Not Palindrome";
    }
    return 0;
}