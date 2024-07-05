//Deleting in singly linked list:-
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
// Case 1: Deletion at the beginning of the linked list(TC:O(n),SP:O(1))
struct Node* deleteAtFirst(struct Node* head){
  struct Node *ptr=head;
  head=head->next;
  free(ptr);
}
// Case 2: Deletion in between the linked list
struct Node* deleteAtIndex(struct Node* head,int index){
  struct Node *p=head;
  struct Node *q=head;
  for(int i=0;i<index-1;i++){
    p=p->next;
    q=q->next;
  }
    p->next=q->next;
    free(q);
    return head;
}
// Case 3: Deletion at the end of the linked list
struct Node* deleatAtEnd(struct Node* head){
  struct Node *p=head;
  struct Node *q=head->next;
  while(q->next!=NULL){
    p=p->next;
    q=q->next;
  }
  p->next=NULL;
  free(q);
  return head;
}
// Case 4: Deletion given value
struct Node* deleteByValue(struct Node *head,int value){
  struct Node *p=head;
  struct Node *q=head->next;
  while(q->data!=value && q->next!=NULL){
    p=p->next;
    q=q->next;
  }if(q->data==value){
    p->next=q->next;
    free(q);
  }
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
//Polynomial representation
#include <stdio.h>

int main() {
    int degree;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);
    double coefficients[degree + 1];
    for (int i = 0; i <= degree; i++) {
        printf("Enter the coefficient for x^%d: ", i);
        scanf("%f", &coefficients[i]);
    }
    printf("The polynomial is: ");
    for (int i = degree; i >= 0; i--) {
        if (i != degree) {
            printf(" + ");
        }
        printf("%fx^%d", coefficients[i], i);
    }
    printf("\n");

    return 0;
}
