//A doubly linked list is a linked list for which a node contains a pointer to the previous as well as the next node in the sequence.
/*Adavtages of doublyLinked list*/
//The advantage of a doubly linked list is that given a node in a list, we can navigate in both directions
//In doubly Linked list we can delete a node even if we dont have prev node address
/*Disadvantages of linked list*/
//Each node requires an extra pointer, requires more space
//The insertion or deletion of a node takes a bit longer
//InsertionAtBeginning---->TimeComplexity:O(1),SpaceComplexity:O(1)
#include<stdio.h>
#include<stdlib.h>
struct DLLNode{
    int data;
    struct DLLNode *next;
    struct DLLNode *prev;
};
void InsertionAtBeginning(struct DLLNode **head,int data){
    struct DLLNode *current=*head;
    struct DLLNode *newNode=(struct DLLNode*)malloc(sizeof(struct DLLNode));
    if(!newNode){
        printf("Memory error");
        return;
    }
    newNode->prev=NULL;
    newNode->data=data;
    newNode->next=NULL;
    if(current==NULL){
        *head=newNode;
        return;
    }
    newNode->next=*head;
    (*head)->prev=newNode;
    *head=newNode;
};
//InsertAtEnding of doubly linked list--->Time complexity:O(n),Space complexity:O(1)
void insertAtEnd(struct DLLNode **head,int data){
    struct DLLNode *current;
    struct DLLNode *newNode=(struct DLLNode*)malloc(sizeof(struct DLLNode));
    if(!newNode){
        printf("Memory Error");
        return;
    }
    newNode->prev=NULL;
    newNode->data=data;
    newNode->next=NULL;
    if(*head==NULL){
        *head=newNode;
        return;
    }
    while(current->next!=NULL){
        current=current->next;
        newNode->prev=current;
        current->next=newNode;
    }
}
//InsertAtGivenPosition--->Time Complexity:O(n),Space Complexity:O(1)
void insert(struct DLLNode **head,int data,int position){
    int k=1;
    struct DLLNode *temp,*newNode;
    newNode=(struct DLLNode*)malloc(sizeof(struct DLLNode));
    if(!newNode){
        printf("Memory Error");
        return;
    }
    newNode->prev=NULL;
    newNode->data=data;
    newNode->next=NULL;
    if(position==1){
        newNode->next=*head;
        newNode->prev=
    }
}
