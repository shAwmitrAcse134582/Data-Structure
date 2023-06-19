#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node *prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print_forward(Node *head){
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;

}
void print_backward(Node *tail){
    Node *tmp=tail;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
void insert_position(Node *&head,int pos,int val){
    Node *newNode=new Node(val);
    Node *tmp=head;
 for(int i=1;i<=pos-1;i++){
    tmp=tmp->next;   
 }
//  cout<<tmp->val<<endl;
newNode->next=tmp->next;
tmp->next=newNode;
tmp->next->prev=newNode;
newNode->prev=tmp;
}
int main()
{
fast;
Node *head=new Node(10);
Node *a=new Node(20);
Node *b=new Node(30);
Node *c=new Node(40);
Node *tail=c;

// // connection
head->next=a;
a->prev=head;
a->next=b;
b->prev=a;
b->next=c;
c->prev=b;


insert_position(head,2,100);
print_forward(head);
// print_backward(tail);



get_out;
}