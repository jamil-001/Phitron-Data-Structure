#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    queue<int> q;
    int n,m;
    bool flag = true;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        st.push(x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin >> x;
        q.push(x);
    }
    if(n != m){
        flag = false;
    }else{
        while(!st.empty() && !q.empty())
        {
            if(st.top() != q.front())
            {
                flag = false;
            }
            st.pop();
            q.pop();
        }
    }
    if(flag)
    {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}