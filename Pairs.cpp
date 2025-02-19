#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    Student(string name,int roll)
    {
        this->name = name;
        this->roll = roll;
    }

};

bool cmp(Student &l,Student &r)
{
    if(l.name != r.name)
       return l.name < r.name;
    return l.roll > r.roll;
}


int main(){
    
    int n;
    cin >> n;
    vector<Student>st;
    for(int i=0;i<n;i++){
        string name;
        int roll;
        cin >> name >> roll;
        st.push_back(Student(name,roll));
    }
    sort(st.begin(),st.end(),cmp);
    for(auto s : st)
    cout << s.name <<" " << s.roll << endl;
    return 0;
}