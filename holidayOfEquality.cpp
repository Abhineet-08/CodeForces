#include <bits/stdc++.h>
using namespace std;

int getMax(int arr[], int n)
{
    return *max_element(arr, arr + n);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxVal = getMax(arr, n);
    for (int i = 0; i < n; i++)
    {
        ans = ans + (maxVal - arr[i]);
    }
    cout << ans << endl;
    return 0;
}