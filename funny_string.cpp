#include<bits/stdc++.h>

using namespace std;

int main(){
    
        int q;
        cin >> q;
        for(int i =0 ; i < q; i++){
        string s;
         cin >> s;
         // 1-0 2-1 3-2 0-3
        int diff[s.size() - 1];
        int rev_diff[s.size() - 1];
        for(int i = 0; i < s.size() -1; i++){
            
            diff[i] = s[i+1] - s[i]; 
                if(diff[i] < 0){
                    diff[i] = s[i] - s[i+1];
                }
            
        }
        for(int i = 0; i < s.size() ; i++){
            rev_diff[i] = diff[(s.size()-1) - (i+1)];
        }
        // for(int i = 0; i < s.size() - 1; i++){
        //     cout << diff[i] <<"\n";
        // }
        // for(int i = 0; i < s.size() - 1; i++){
        //     cout << rev_diff[i];
        // }
        int isfunny = 1;
        for(int i =0; i < s.size() - 1; i++){
            if(diff[i] != rev_diff[i]){
                isfunny = 0;
            }
        }
        if(isfunny == 1){
            cout << "Funny" << "\n";
        }
        else if(isfunny == 0){
            cout << "Not Funny" << "\n";
        }
        }
    
}