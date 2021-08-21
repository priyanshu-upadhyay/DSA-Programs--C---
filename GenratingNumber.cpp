#include <bits/stdc++.h>
using namespace std;
int main() {
    #ifndef INPUT_OUTPUT
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    queue<string> q;
    q.push("5");
    q.push("6");
    for(int i = 0; i<n; i++)
    {
        string curr = q.front();
        cout<<curr<<" ";
        q.pop();
        q.push(curr + "5");
        q.push(curr + "6");

    }
    return 0;
}