#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    vector<int>v2(n);
    //input array1
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    //input array2
    for(int i=0;i<n;i++){
        cin >> v2[i];
    }
    //concate vector2 ending poin to vector array 1
    v2.insert(v2.end(),v.begin(),v.end());
    //final output concate:
    for(auto num:v2){
        cout << num << " ";
    }


    return 0;
}