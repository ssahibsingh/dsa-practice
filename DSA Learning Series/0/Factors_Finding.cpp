#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], count = 0;
    for (int i = 1; i < n+1; i++)
    {
        if(n%i==0){
            arr[count] = i;
            count++;
        }
    }

    cout<<count<<endl;
    for(int i = 0; i < count; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}