#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int g;cin>>g;
        while(g--){
            int i, n, q;
            cin>>i>>n>>q;
            int ans = n/2;

            if(q == i){
                cout<<ans<<endl;
            }
            else{
                cout<<n-ans<<endl;
            }
        }
    }
    return 0;
}