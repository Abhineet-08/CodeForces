#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = 0;
        int rem = abs(a - b);
        if (a == b)
        {
            ans = 0;
        }
        else
        {
            if (rem <= 10)
            {
                ans = 1;
            }
            else
            {
                // int val = 0;
                if (rem % 10 == 0)
                {
                    ans = rem / 10;
                }
                else
                    ans = rem / 10 + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}