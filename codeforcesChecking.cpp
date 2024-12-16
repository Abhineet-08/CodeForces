#include <bits/stdc++.h>
using namespace std;

int main()
{
    string val = "codeforces";
    int t;
    cin >> t;
    while (t--)
    {
        bool found = false;
        char ch;
        cin >> ch;
        for (int i = 0; i <= 9; i++)
        {
            if (ch == val[i])
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}