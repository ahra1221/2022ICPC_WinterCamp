#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, sum=0;
    cin >> n;

    int a[51], b[51];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];

    sort(a, a+n);
    sort(b, b+n, greater<int>());

    for(int j=0;j<n;j++) sum+= a[j]*b[j];
    cout << sum <<"\n";
    return 0;
}
