#include<bits/stdc++.h>
#include <array>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int len = sizeof(a)/sizeof(a[0]);
    sort(a, a + len);
    int length_arr[n];
    for(int i = 0 ; i < n ; i++){
        int count = 1;
        for(int j = i + 1; j < n; j++){
            
            if(a[j] - a[i] <= 1){
                 //cout << a[j] - a[i];
                count++;
            }
            
            
        }
        //cout << count << " ";
        length_arr[i] = count;
        //cout << length_arr[i] << " ";
    } 
    int largest_no = length_arr[0];
    for(int i = 1; i < n ; i ++){
        if(length_arr[i] > largest_no){
            largest_no = length_arr[i];
        }
    }
    cout << largest_no;

}
