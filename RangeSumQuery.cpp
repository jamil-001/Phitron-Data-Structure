#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin >> n >> q;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    while(q--){
        int start,end;
        cin >> start >> end;
        start--;
        end--;
        int sum = 0;
        for(int i=start;i<=end;i++){
            sum += v[i];
             
        }
        cout << sum <<endl;
    }
    return 0;
}