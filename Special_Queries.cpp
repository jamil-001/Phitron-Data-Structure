#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    queue<string> q;
    while(n--)
    {
        int nu;
        cin >> nu;
        if(nu == 0)
        {
            string s;
            cin >> s;
            q.push(s);
        }else if(nu == 1) 
        {
            if(q.empty())
            {
                cout << "Invalid" << endl;
            }else{
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
    return 0;
}