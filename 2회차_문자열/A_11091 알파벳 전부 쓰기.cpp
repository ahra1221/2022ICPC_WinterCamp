#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string arr[51];
    int alphabet[27] = {1, };
    int flag = 1;
    for(int i=0;i<n;i++){
        string s;
        getline(cin, s);
        arr[i] = s;
    }
    for(int i=0;i<n;i++){
        string tmp = arr[i];
        for(int j=0;j<tmp.length();j++){
            if(tmp[j] >= 'A' && tmp[j] <= 'Z'){ //대문자
                alphabet[tmp[j] - 'A'] = 0;
            }
            else if(tmp[j] >= 'a' && tmp[j] <= 'z'){//소문자
                alphabet[tmp[j] - 'a'] = 0;
            }
            else{
                continue;
            }
        }
        for(int j=0;j<27;j++){
            if(tmp[j]){ continue;}
            else{
                flag = 0;
                break;
            }
        }
        if(flag){ cout << "pangram";}
        else{
            cout <<"missing ";
            for(int j=0;j<27;j++){
                if(!tmp[j]) cout << to_string(tmp[j]+'a');
            }
        }
    }

    return 0;
}
