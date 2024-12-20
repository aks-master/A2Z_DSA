/*
Example 1:
Input:N = 2
Output:True
Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).
Example 2:
Input:N =10
Output: False
Explanation: 10 is not prime, it is a composite number because it has 4 divisors: 1, 2, 5 and 10.

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 1 && n != 1 && n != 0)
    {
        cout << "True";
    }
    else if (n != 1 && n != 0)
    {
        cout << "False";
    }
    else
    {
        cout << "1 (or) 0 are neither prime nor composite";
    }
    // a faster apporch is done later.
    return 0;
}