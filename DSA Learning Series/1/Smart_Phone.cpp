#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, ans = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
        ans = max(ans, arr[i] * (n-i));
    
    cout<<ans<<endl;
    return 0;
}