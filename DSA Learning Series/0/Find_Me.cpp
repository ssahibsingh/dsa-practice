#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, flag = 0;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i]==k)
            flag = 1;
    }

    if(flag)
        cout<<"1";
    else
        cout<<"-1";
    return 0;
}