#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        string n;
        string ans = "";
        cin>>n;
        for(int i=0;i<n.length();i++)
            ans=n[i] + ans;
        cout<<stoi(ans)<<endl;
    }
    return 0;
}