#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,t;
    int flag = 0 ;
    int pos[30001];
    cin >> n;

    for(int i=0;i<n;i++) cin >> pos[i]; // 전우들의 위치
    int len = 0, max_len = 0;
    for (int i = 1; i < n; i++) {
        cin >> len;
        if (max_len < pos[i-1] + len) {
            max_len = pos[i-1] + len; //가장 긴 사거리 갱신
        }
        if (max_len < pos[i]) {
            cout << "엄마 나 전역 늦어질 것 같아";
            return 0;
        }
    }
    cout << "권병장님, 중대장님이 찾으십니다";
    return 0;
}
