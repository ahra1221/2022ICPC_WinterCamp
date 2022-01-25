#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N=0, cnt=0;
    int arr[1000001];
    int order[1000001];
    unordered_map<int, int> mp;

    cin >> N;
    for(int i=0;i<N;i++) {
        cin >> arr[i];
        order[i] = arr[i];
    }
    sort(arr,arr+N); // 오름차순 정렬
    mp[arr[0]] = cnt;
    for(int i=1;i<N;i++){
        if(arr[i-1] != arr[i]){
            cnt++;
            mp[arr[i]] = cnt;
        }
    }
    for(int i=0;i<N;i++){
        cout << mp[order[i]] << " ";
    }
    cout << "\n";
    return 0;
}