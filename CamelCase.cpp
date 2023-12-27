#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int CamelCase = 1;
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int j = 0; j < s.size(); j++){
    for(int i = 0; i < alphabet.size(); i++){
        if(s[j] == alphabet[i]){
            CamelCase++;
        }
    }
    }
    cout << CamelCase;
}
