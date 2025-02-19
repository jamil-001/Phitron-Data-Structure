#include<bits/stdc++.h>
using namespace std;
int main(){
    //map<key_data_type, value_data_type> map_name;
   int t;
   cin >> t;
   cin.ignore();
   while(t--){

     string st;
    getline(cin,st);
    stringstream ss(st);
    string word;
    map<string,int>mp;
    int count_max = -1;
    string ans;
    while (ss >> word)
    {
        mp[word]++;
        if(count_max < mp[word])
        {
            count_max = mp[word];//integer value
            ans = word;//string
        }
    }
    cout << ans << " " << count_max << endl;
   }

    return 0;
}