#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        for(int i=0;i<n;i++){
            if(a[i] == num){
                cout << "found"<<endl;
            }
        }
    }
    return 0;
}