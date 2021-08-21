#include <bits/stdc++.h>
#define int long long
using namespace std;


int longestValidParentheses(string s) {
        stack<pair<char,int>> stk;
        vector<int> v;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(')
            {
                stk.push(make_pair(s[i],i));
            }
            else if(!stk.empty() && stk.top().first == '(')
            {
                v.push_back(stk.top().second);
                v.push_back(i);
                stk.pop();
            }
        }
        for(int i : v)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
        int n = v.size();
        int i = 1;
        int c = 0;
        while(i<n)
        {
            int k = 0;
            while ( v[i] - v[i-1]== 1)
            {
                k = k + 1;
                i++;
            }
            c = max(k+1,c);
            i++;
            
        }
        return c;
    }
    
    int longestValidParentheses1(string s) {
        stack<pair<char,int>> stk;
        int arr[s.length()];
        int m = 0;
        vector<int> v;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(')
            {
                stk.push(make_pair(s[i],i));
            }
            else if(!stk.empty() && stk.top().first == '(')
            {
                arr[m] = stk.top().second;
                m++;
                arr[m] = i;
                m++;
                // v.push_back(stk.top().second);
                // v.push_back(i);
                stk.pop();
            }
        }
        // for(int i : v)
        // {
        //     cout<<i<<" ";
        // }
        // int n = v.size();
        sort(arr,arr+m);
        for (int i = 0; i < m; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        
        int i = 1;
        int c = 0;
        while(i<m)
        {
            int k = 0;
            while ( i<m && arr[i] - arr[i-1]== 1)
            {
                k = k + 1;
                i++;
            }
            c = max(k+1,c);
            i++;
        }
        return c;
    }

int32_t main() {
    #ifndef ONLINE_JUDGE
            freopen("./input.txt", "r", stdin);
            freopen("./output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cout<<longestValidParentheses1("()(())");
    
    
}