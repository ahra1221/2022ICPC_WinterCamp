#include <bits/stdc++.h>
using namespace std;

int func(char c){
    if(c>='a' && c<='z') return (c-'a');
    if(c>='A' && c<='Z') return (c-'A');
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore(1);

    while(n--){
        string s;
        getline(cin, s);
        bitset<26> bs;

        for(char c : s){
            int nc = func(c);
            if(nc != -1) bs[nc] = 1;
        }

        if(bs.all()) cout << "pangram\n";
        else{
            cout << "missing ";
            for(int i=0;i<26;i++){
                if (!bs[i]) cout << (char)(i + 'a');
            }
            cout << "\n";
        }
    }
    return 0;
}
