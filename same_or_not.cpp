#include<bits/stdc++.h>
using namespace std;
class mystack
{
    public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
class mystack2
{
    public:
    vector<int> v2;
    void push(int val)
    {
        v2.push_back(val);
    }
    void pop()
    {
        v2.pop_back();
    }
    int top()
    {
        return v2.back();
    }
    int size()
    {
        return v2.size();
    }
    bool empty()
    {
        return v2.empty();
    }
};
int main(){
    mystack st;
    mystack2 st2;
    int n,m;
    cin >> n;
    for(int i=0;i<n;i++){
        int val;
        cin >> val;
        st.push(val);
    }
    cin >> m;
    for(int i=0;i<m;i++){
        int val;
        cin >> val;
        st2.push(val);
    }
    bool flag = true;
    if(n != m){
        flag = false;
    }else{
        while(!st.empty() && !st2.empty())
    {
        if(st.top() != st2.top()){
            flag = false;
            break;
        }else{
            flag = true;
        }
        st.pop();
        st2.pop();
    }
    }
    if(flag)
       cout << "YES" << endl;
    else
       cout << "NO"  << endl;


   /* while(!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    */
    return 0;
}