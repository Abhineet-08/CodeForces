#include<bits/stdc++.h>
using namespace std;

int getMin(int arr[], int n)
{
    return *min_element(arr, arr + n);
}

int getMax(int arr[], int n)
{
    return *max_element(arr, arr + n);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int min = getMin(arr,n);
    int max = getMax(arr,n);
    int min_index,max_index,ans;
    for(int i=0;i<n;i++) {
        if(arr[i]==max){
            max_index = i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--) {
        if(arr[i]==min){
            min_index = i;
            break;
        }
    }
    if(min_index > max_index){
        ans = (n-1-min_index)+(max_index);
    }else {
        ans = (n-1-min_index)+(max_index)-1;
    }
    cout << ans << endl;
    return 0;
}