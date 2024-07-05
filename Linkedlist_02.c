//Singly linked lit insertion:-->
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void linkedListTraversal(struct Node* ptr){
  while(ptr!=NULL){
    printf("Element:%d\n",ptr->data);
    ptr=ptr->next;
  }
}
// Case 1: Insertion at the beginning of the linked list(TC:O(1),SP:O(1))
struct Node *insertAtFirst(struct Node* head,int data){
  struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
  ptr->next=head;
  head=ptr;
  return head;
}
//Case 2: Insertion in between the linked list(TC:O(1),SP:O(n))
struct Node *insertAtIndex(struct Node* head,int data,int index){
  struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
  struct Node* p=head;
  int i=0;
  while(i!=index-1){
    p=p->next;
    i++;
  }
  ptr->data=data;
  ptr->next=p->next;
  return head;
}
//Case 3: Insertion at the end of the linked list(TC:O(n),SP:O(1))
struct Node *insertAtEnd(struct Node* head,int data){
  struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
  ptr->data=data;
  struct Node *p=head;
  while(p->next!=NULL){
    p=p->next;
  }
  p->next=ptr;
  ptr->next=NULL;
  return head;
}
//Case 4: Insertion after the node
struct Node *insertAfterNode(struct Node* head,struct Node* prevNode,int data){
  struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
  ptr->data=data;
  ptr->next=prevNode->next;
  prevNode->next=ptr;
  return head;
}

int main(){
  struct Node* head;
  struct Node* second;
  struct Node* third;
  struct Node* fourth;
  head=(struct Node*)malloc(sizeof(struct Node));
  second=(struct Node*)malloc(sizeof(struct Node));
  third=(struct Node*)malloc(sizeof(struct Node));
  fourth=(struct Nodde*)malloc(sizeof(struct Node));
  head->data=7;
  head->next=second;
  second->data=11;
  second->next=third;
  third->data=41;
  third->next=fourth;
  fourth->data=66;
  fourth->next=NULL;
  linkedListTraversal(head);
  return 0;
}