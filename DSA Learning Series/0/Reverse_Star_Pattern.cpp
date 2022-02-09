#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    for(int i=1;i<n+1;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for (int j = n-i; j < n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}