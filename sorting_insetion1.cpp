#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
    cin >> arr[i];
    }
    int count = 0;
    int stored_value = arr[n -1];
    for(int i = 1; i < n; i++){
        if(stored_value < arr[(n-1) - i]){
            arr[(n-1) - (i-1)] = arr[(n-1) - i];
            count++;
            for(int j = 0; j < n; j++){
                cout << arr[j];
                cout << " ";
                
                
            }
            cout<<"\n";
        }
        
        else if(stored_value > arr[(n-1) - i]){
            arr[(n-1) - (i-1)] = stored_value;
            for(int j = 0; j < n; j++){
                cout << arr[j];
                cout << " ";
            }
            break;
            cout << "\n";
        }
        if(count == (n-1)){
            arr[0] = stored_value;
            for(int j = 0; j < n; j++){
                cout << arr[j];
                cout << " ";
            }
        }
    }
    //cout << count;
}
