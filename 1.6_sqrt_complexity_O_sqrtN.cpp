#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=sqrt(n);i++){/// i*i <=n 
       if(n % i == 0){
        cout << i <<" " << n/i << " ";
       }
    }
    return 0;
}
//complextity
//order of = o(sqrt(n));