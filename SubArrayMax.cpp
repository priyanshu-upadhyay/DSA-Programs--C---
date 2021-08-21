#include <bits/stdc++.h>
using namespace std;
int main() {
    #ifndef INPUT_OUTPUT
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
    #endif
    
    int arr[] = {10,8,5,12,15,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    deque<int> q;
    for (int i = 0; i < n; i++)
    {
        if (!q.empty()&&q.front()<=arr[i])
        {
            q.clear();
        }
        q.push_back(i);
        
        if(i%(k-1) == 0)
        {
            cout<<q.front()<<" ";
            q.pop_front();
        }
        
        
        
    }
    
    
    
    
    
    
    
    return 0;
}