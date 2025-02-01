#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    queue<int> q;
    int n,m;
    cin >> n;
    bool flag = true;
    for(int i=0;i<n;i++){
        int val;
        cin >> val;
        st.push(val);
    }
    cin >> m;
    for(int i=0;i<m;i++){
        int val;
        cin >> val;
        q.push(val);
    }
    if(n != m){
        flag = false;
    }else{
        while(!st.empty() && !q.empty()){
            if(st.top() != q.front()){
                flag = false;
            }else{
                flag = true;
            }
            st.pop();
            q.pop();
        }
    }
    if(flag)
       cout << "YES" << endl;
    else
       cout << "NO"  << endl;


    
    return 0;
}