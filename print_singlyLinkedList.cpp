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
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
        
};
int main()
{
fast;
Node *head=new Node(10);
Node *a=new Node(20);
Node *b=new Node(30);
Node *c=new Node(40);
Node *d=new Node(50);

head->next=a;
a->next=b;
b->next=c;
c->next=d;

Node *temp=head;

while(temp !=NULL){
    cout<<temp->val<<endl;
    temp=temp->next;
}

get_out;
}