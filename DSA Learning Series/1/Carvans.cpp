#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        unordered_set<int> s;
        unordered_set<int> :: iterator itr;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (n > 1)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i] < arr[i + 1])
                    arr[i + 1] = arr[i];

                s.insert(arr[i]);
            }
            s.insert(arr[n - 1]);
            cout<<s.size()<<endl;
        }
        else
            cout << "1" << endl;
    }
    return 0;
}