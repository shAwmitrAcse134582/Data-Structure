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
void insert_at_tail(Node *&head,int v){
  Node *newNode=new Node(v);
  if(head==NULL){
    head=newNode;
    cout<<endl<<"Inserted At head"<<endl<<endl;
    return;
  }
  Node *tmp=head;
  while(tmp->next!=NULL){
    tmp=tmp->next;
  }
  tmp->next=newNode;
  cout<<endl<<"Inserted At tail"<<endl<<endl;

}
void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl
         << endl
         << "Inserted at position " << pos << endl
         << endl;
}
void insert_head(Node *&head,int v){
  Node *newNode=new Node(v);
  newNode->next=head;
  head=newNode;
  cout<<endl<<"Inserted at head"<<endl;

}
void delete_position(Node *head, int pos){
    Node *tmp=head;
    for(int i=1;i<pos-1;i++){
        tmp=tmp->next;
    }
    Node *deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;

}
void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
int main()
{
fast;
Node *head=NULL;
while(true){
    cout<<"option-1:Insert at tail"<<endl;
    cout<<"option-2:print linked list"<<endl;
    cout<<"option-3:Insert at any position"<<endl;
    cout<<"option-4:Insert at head"<<endl;
    cout<<"option-5:Delete  at any position"<<endl;
    cout<<"option-6:teminate"<<endl;

int op;
cin>>op;
if(op==1){
  cout<<"Please Enter Value"<<endl;
int v;
cin>>v;
insert_at_tail(head,v);
}
else if(op==2){
print_linked_list(head);
}
 else if (op == 3)
        {
            int pos, v;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> v;
            if(pos==0){
                insert_head(head,v);
            }
            else{
                 insert_at_position(head, pos, v);
            }

        }
        else if(op==4){
            int v;
            cout<<"Enter value: ";
            cin>>v;
            insert_head(head,v);
        }
        else if(op==5){
            int pos;
            cout<<"Enter position"<<endl;
            cin>>pos;
            delete_position(head,pos);
        }
else if(op==6){
    break;
}

}

get_out;
}

