#include <bits/stdc++.h>
using namespace std;

string s[101];

int ispal(int x, int y){
    string str = s[x]+s[y];
    int len = str.size();

    for(int i=0;i<len/2;i++){
        if(str[i] != str[len-i-1]) return 0;
    }
    return 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    int n;
    cin >> tc;

    while(tc--){
        cin >> n; 
        for(int i=0;i<n;i++) cin >> s[i];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(ispal(i,j)){
                    cout << s[i] << s[j] <<"\n";
                    break;
                }
            }
        }
    }
    cout << "0\n";

    return 0;
}
