#include <iostream>
#include <vector>

using namespace std;

int min_charges(int n, vector<int>& welfare) {
    int total_welfare = 0;
    for (int w : welfare) {
        total_welfare += w;
    }
    int average_welfare = total_welfare / n;
    
    int charges = 0;
    for (int w : welfare) {
        if (w < average_welfare) {
            charges += average_welfare - w;
        }
    }
    
    return charges;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif    
    int n;
    cin >> n;
    
    vector<int> welfare(n);
    for (int i = 0; i < n; ++i) {
        cin >> welfare[i];
    }
    
    cout << min_charges(n, welfare)+1 << endl;
    
    return 0;
}
