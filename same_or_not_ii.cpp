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
 
   bool empty()
   {
    return v.empty();
   }
};
class myqueue
{
   public:
   list<int> l;
   void push(int val)
   {
    l.push_back(val);
   }
   void pop()
   {
    l.pop_front();
   }
   int front()
   {
    return l.front();
   }
   bool empty()
   {
    return l.empty();
   }
};
int main(){
    mystack st;
    myqueue q;
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