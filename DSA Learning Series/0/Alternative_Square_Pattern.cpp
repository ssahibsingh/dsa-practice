#include <bits/stdc++.h>
using namespace std;

void displayOdd(int start){
    for(int i = start; i < start + 5;i ++){
        cout<<i<<" ";
    }
    cout<<endl;
}
void displayEven(int start){
    for(int i = start; i > start - 5;i --){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n + 1; i++)
    {
        if(i%2 == 0){
            displayEven(i*5);
        }
        else{
            displayOdd(5*(i-1) + 1);
        }
    }
    return 0;
}