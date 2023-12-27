// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    string s;
    getline(cin, s);
    int a[26] = {0};
    for(int i = 0; i < 26; i++){
        a[i] = 0;
        }
    
    for(int i = 0; i < s.size(); i++){
         if(s[i] <= 90 && s[i] >= 65){
           s[i] = s[i] + 32;
       }
    if((s[i] - 97) >= 0 && (s[i] -97) <= 25 ){
       if((a[s[i] - 97]) == 0  ){
        a[s[i] - 97]++;
       }
    }
      
    }
//     for(int i =0; i <26; i++){
//         cout << a[i] << "\n";
//    }
    // flag
    int isPangram = 0;
    for(int i = 0; i < 26; i++){
        if(a[i] == 0){
            isPangram = 1;
        }
    }
    if(isPangram == 0){
        cout << "pangram";
    }
    else if(isPangram == 1){
        cout << "not pangram";
        }
    
    // int pangram = 0;
    // for(int i = 0; i < 26; i++){
    //     if(a[i] == 0){
    //         cout << "not pangram";
    //         break;
    //     }
    //     if(a[i] != 0){
    //         pangram++;
    //     }
    //     if(pangram == 26){
    //         cout << "pangram";
    //         break;
    //     }
    // }
    
    return 0;
}
