#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
   struct Node* llink;
   struct Node* rlink;
   int data; 
}Node;

typedef struct LinkedList{
    Node* head;
    int size;
}LinkedList;

void initLinkedList(LinkedList* DL){
    DL->head = NULL;
    DL->size = 0;
}

Node* creatNode(int data){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->llink = temp->rlink = NULL;
    temp->data = data;
    return temp;
}

void insertLinkedList(LinkedList* DL, Node* input){
    if(DL->head == NULL){
        input->llink = input->rlink = input;
        DL->head = input;
    }
    else{
        input->rlink = DL->head->rlink
    }
}