#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 201

typedef struct Node{
    char name[101];
    struct Node* Link;
}Node;

typedef struct LinkedList{
    Node* head;
    Node* tail;
}LinkedList;

void initList(LinkedList* LL){
    LL->head = LL->tail = NULL;
}

void insert (LinkedList* LL, Node* AG){
    if(!LL->head){
        LL->tail = LL->head = AG;
        return ;
    }
    LL->tail->Link = AG;
    LL->tail = AG;
}

Node* creatNode (char* newName){
    Node* temp = (Node*)malloc(sizeof(Node));

    strcpy(temp->name, newName);
    temp->Link = NULL;
    return temp;
}

int main () {
    LinkedList LL[MAX];
    Node* temp = NULL;
    char inputname[101] = "";
    int N, input, number, print;

    scanf("%d", &N);

    for(input = 0; input < MAX; input++){
        initList(&LL[input]);
    }

    for(input = 0; input < N; input++){
        memset(inputname, 0, sizeof(inputname));
        scanf("%d %s", &number, inputname);
        temp = creatNode(inputname);
        insert(&LL[number], temp);
        temp = NULL;
    }

    for(print = 1; print < MAX; print++){
        if(!LL[print].head){
            while(!LL[print].head){
                printf("%d %s\n", print, LL[print].head->name);
                LL[print].head = LL[print].head->Link;
            }
        }
    }
}