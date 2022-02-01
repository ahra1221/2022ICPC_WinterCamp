#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string arr[51];
    int alphabet[27] = {0, };
    for(int i=0;i<n;i++){
        string s;
        getline(cin, s);
        arr[i] = s;
    }
    for(int i=0;i<n;i++){
        string tmp = arr[i];
        for(int j=0;j<tmp.length();j++){
            if(tmp[j] >= 'A' && tmp[j] <= 'Z'){ //대문자
                alphabet[tmp[j] - 'A'] = 1;
            }
            else if(tmp[j] >= 'a' && tmp[j] <= 'z'){//소문자
                alphabet[tmp[j] - 'a'] = 1;
            }
            else{
                continue;
            }
        }
        for(int j=0;j<27;j++){
            
        }
    }

    return 0;
}
