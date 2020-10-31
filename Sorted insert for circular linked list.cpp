#include<bits/stdc++.h>
using namespace std;


//// One condition for start value, middle value and end value
//// in start condition update head

Node *sortedInsert(Node* head, int x)
{
   //Your code here
   
   if(head==NULL){
       return new Node(x);
   }
   
   Node *temp = head;
   
   Node *node=new Node(x);
   
   bool flag=false; 
   
   if(head->data > x){
       flag=true;
       
       while(temp->next!=head){
          temp=temp->next;
        }
       
       Node *store=temp->next;
        temp->next=node;
        node->next=store;
        
        head=node;
   }
    
   while(temp->next!=head and !flag){
       if(temp->next->data > x){
     //      cout<< temp->data<<" "<<temp->next->data<<" "<<node->data<<endl;
           Node *store=temp->next;
           temp->next=node;
           node->next=store;
           flag=true;
       }
       temp=temp->next;
   }
   
   if(!flag){
       Node *store=temp->next;
        temp->next=node;
        node->next=store;
   }
   
   return head;
   
}