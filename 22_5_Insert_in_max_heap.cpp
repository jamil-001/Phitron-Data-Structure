#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    int val;
    cin >> val;
    v.push_back(val);
    int cur_idx = v.size()-1;
    while(cur_idx != 0)
    {
        int par_idx = (cur_idx-1)/2;
        if(v[par_idx] < v[cur_idx])
           swap(v[par_idx],v[cur_idx]);
        else
            break;
        cur_idx  = par_idx;
    }
    for(int x : v)
    {
        cout << x <<" ";
    }
    cout << endl;
    return 0;
}
/*
input:
10
23 15 21 13 9 19 8 2 4 7
18
output:
23 18 21 13 15 19 8 2 4 7 9 

*/