#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int ans = -1;
    int arr[1000001];

    cin >> n;
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
        if(arr[i]+arr[i+1] > arr[i+2]){
            ans = max(ans, arr[i]+arr[i+1]+arr[i+2]);
        }
    }
    cout << ans <<"\n";
    return 0;
}
