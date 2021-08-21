#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
void printLinkedListRecursion(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    printLinkedListRecursion(head->next);
    cout<<head->data<<" ";
}

Node* slidingReverse(Node *head)
{
    Node* p = head;
    Node* q = NULL;
    Node* r = NULL;
    while (p!=NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    return q;
    
}

Node* recursionReverse(Node *head, Node *temp)
{
    if(head == NULL)
    {
        return temp;
    }
    Node* NextNode = head->next;
    head->next = temp;
    return recursionReverse(NextNode, head);


}





int main() 
{ 
    #ifndef INPUT_OUTPUT
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
    #endif
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(50);
    // cout<<endl;
    // printLinkedListRecursion(head);
    // printlist(slidingReverse(head));

    head = recursionReverse(head, NULL);
	printlist(head);
    
	return 0;
} 
