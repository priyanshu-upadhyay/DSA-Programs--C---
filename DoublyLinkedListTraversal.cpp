#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        data=d;
        prev=NULL;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}
Node* reverseDoublyLinkedList(Node* head)
{
    if(head == NULL || head->next == NULL) return head;
    Node* current = head;
    Node* prev = NULL;
    while (current!=NULL)
    {
        prev = current->prev;
        current->prev = current->next;
        current->next = prev;
        current = current->prev;
    }
    return prev->prev;
    
    
    
}
int main() 
{ 
    #ifndef INPUT_OUTPUT
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	Node *temp3=new Node(40);
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
    temp2->next = temp3;
    temp3->prev = temp2;
    head = reverseDoublyLinkedList(head);
	printlist(head);
	return 0;
} 
