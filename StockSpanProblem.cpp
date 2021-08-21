#include <bits/stdc++.h>
#define int long long
using namespace std;

void stockSpan(int arr[],int n)
{
    int* ans = new int[n];
    for (int i = n-1; i >= 0; i--)
    {
        int c = 1;
        for (int j = i-1; j >= 0; j--)
        {
            if(arr[j]<=arr[i])
            {
                c++;
            }
            else
            {
                break;
            }
        }
        ans[i] = c;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i] <<" ";
    }
    cout<<"\n";
    
    
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n = 6;
    int arr[] = {30,20,25,28,27,29};
    stockSpan(arr,n);
}