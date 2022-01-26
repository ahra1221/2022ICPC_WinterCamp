#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> v;
    
    string s;
    cin >> s;

    for(int i=0;i<s.length();i++){
        v.push_back(s.substr(i,s.length()-i));
    }
    sort(v.begin(), v.end());
    for(string str : v) cout << str << "\n";
    return 0;
}
