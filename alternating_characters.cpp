#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int q; 
    cin >> q;
    
    for(int i = 0; i < q; i++){
        
        string s;
        cin >> s;
    
        int ref = s[0];
    
        int count = 0;
        int m = 1;
        while(m < s.size()){
        
            if(ref == s[m]){
                s.erase(m, 1);
                count++;
            }
        
            else if(ref != s[m]){
                ref = s[m];
                m++;
            }
        }
   
        cout << count << "\n";
    }
return 0;
}