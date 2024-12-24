// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     vector<int> v(n+1);
//     for(int i=1;i<=n;i++){
//         cin >> v[i];
//     }
//     vector<int>equ(n+1);
//     equ[1] = v[1];
//     for(int i=2;i<=n;i++){
//         equ[i]=equ[i-1] + 
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=n/2;i <=n;i++){
        for(int j=1;j<=n;j + i){
            cout << i << j <<endl;
        }
    }
    return 0;
}