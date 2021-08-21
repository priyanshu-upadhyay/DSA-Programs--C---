#include <bits/stdc++.h>
using namespace std;

struct doublyList{
    int val;
    doublyList* pre;
    doublyList* next;
    doublyList(int data){
        val = data;
    }
};

map<int, doublyList*> hashMap;
int CacheSize;
int CurrentListSize = 0;
doublyList* Head = NULL;
doublyList* Tail = NULL;

void CacheSystem(int data)
{
    auto itr = hashMap.find(data);
    if(itr!=hashMap.end())
    {
        doublyList* CurrentPos = hashMap[data];
        CurrentPos->pre->next = CurrentPos->next;
        CurrentPos->next->pre = CurrentPos->pre;
        CurrentListSize--;
    }
    if(CurrentListSize == CacheSize)
    {
        hashMap.erase(Tail->val);
        Tail = Tail->pre;
        Tail->next = NULL;
        CurrentListSize--;
    }
    doublyList* NewNode = new doublyList(data);
    NewNode->next = Head;
    if(Head!=NULL)
    {
        Head->pre = NewNode;
    }
    else
    {
        Tail = NewNode;
    }
    Head = NewNode;
    hashMap[data] = NewNode;
    CurrentListSize++;
}
void PrintDoubly()
{
    doublyList* current = Head;
    while (current!=NULL)
    {
        cout<<current->val<<" ";
        current = current->next;
    }
    cout<<"\n";
    
}
int main() 
{ 
    // #ifndef INPUT_OUTPUT
    //         freopen("input.txt", "r", stdin);
    //         freopen("output.txt", "w", stdout);
    // #endif
    cout<<"Enter the Cache Size of LRU: ";
    cin>>CacheSize;
    cout<<"\n........................................\n";
    char rsp = 'Y';
    while (rsp != 'N' || rsp != 'n')
    {
        int data;
        cout<<"Enter the Reference Data: ";
        cin>>data;
        CacheSystem(data);
        PrintDoubly();
        cout<<"Do you want to continue ? ";
        cin>>rsp;
    }
	return 0;
} 
