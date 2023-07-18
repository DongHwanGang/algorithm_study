#include <stdio.h>
#include <stdlib.h>

typedef struct Qnode{
    int N;
    struct Qnode* link;
}Qnode;

typedef struct LinkedQueue{
    Qnode* front;
    Qnode* rear;
    int size;
}LinkedQueue;

void initQueue(LinkedQueue* LQ){
    LQ->front = LQ->rear = NULL;
    LQ->size = 0;
}

Qnode* creatQnode(int data){
    Qnode* temp = NULL;

    while(!temp)
        temp = (Qnode*)malloc(sizeof(Qnode));

    temp->link = NULL;
    temp->N = data;

    return temp;
}

void pushQueue(LinkedQueue* LQ, Qnode* input){
    if (LQ->front == NULL){
        LQ->front = input;
    }
    else{
        LQ->rear->link = input;
    }
    LQ->rear = input;
    LQ->size++;
}

void popQueue(LinkedQueue* LQ){
    Qnode* temp = NULL;

    if(LQ->front == NULL) return;
    temp = LQ->front;
    LQ->front = LQ->front->link;
    LQ->size--;
    free(temp);
    temp = NULL;
}

void changeQueue(LinkedQueue* LQ){
    Qnode* temp = NULL;

    temp = LQ->front;
    LQ->front = LQ->front->link;
    LQ->size--;
    pushQueue(LQ, temp);
    temp = NULL;
}

int main () {
    LinkedQueue LQ;
    int N, i;

    scanf("%d", &N);

    initQueue(&LQ);

    for(i = 0; i < N; i++){
        pushQueue(&LQ, creatQnode(i+1));
    }

    while(LQ.size > 1){
        popQueue(&LQ);
        if(LQ.size == 1) { break;}
        changeQueue(&LQ);
    }
    
    printf("%d", LQ.front->N);
}