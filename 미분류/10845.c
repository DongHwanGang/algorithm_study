#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Qnode{
    int data;
    struct Qnode* link;
}Qnode;

typedef struct LinkedQueue{
    Qnode* front;
    Qnode* back;
    int size;
}LinkedQueue;

void initLQ(LinkedQueue* LQ){
    LQ->back = LQ->front = NULL;
    LQ->size = 0;
}

Qnode* creatQnode(int data){
    Qnode* newnode = (Qnode*)malloc(sizeof(Qnode));
    newnode->data = data;
    newnode->link = NULL;
    return newnode;
}

void pushQueue(LinkedQueue* LQ, Qnode* newnode){
    if(!LQ->front){
        LQ->front = newnode;
    }
    else{
        LQ->back->link = newnode;
    }
    LQ->back = newnode;
    LQ->size++;
}

int popQueue(LinkedQueue* LQ){
    Qnode* temp = NULL;
    int data;
    if(LQ->size == 0){
        return -1;
    }
    temp = LQ->front;
    LQ->front = LQ->front->link;
    LQ->size--;
    data = temp->data;
    free(temp);
    return data;
}

int emptyQueue(LinkedQueue* LQ){
    return LQ->size == 0;
}

int frontQueue(LinkedQueue* LQ){
    if(LQ->size == 0){
        return -1;
    }
    return LQ->front->data;
}

int backQueue(LinkedQueue* LQ){
    if(LQ->size == 0){
        return -1;
    }
    return LQ->back->data;
}

int main () {
    int N, temp;
    LinkedQueue LQ;
    char control[6] = "";
    scanf("%d", &N);
    initLQ(&LQ);

    while(N--){
        memset(control, 0, sizeof(control));
        scanf("%s", control);

        if(!strcmp("push", control)){
            scanf("%d", &temp);
            pushQueue(&LQ, creatQnode(temp));
        }
        else if (!strcmp("pop", control)){
            printf("%d\n", popQueue(&LQ));
        }
        else if (!strcmp("size", control)){
            printf("%d\n", LQ.size);
        }
        else if (!strcmp("empty", control)){
            printf("%d\n", emptyQueue(&LQ));
        }
        else if (!strcmp("front", control)) {
            printf("%d\n", frontQueue(&LQ));
        }
        else{
            printf("%d\n", backQueue(&LQ));
        }
    }
}