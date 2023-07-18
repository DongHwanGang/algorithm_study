#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Dnode{
    struct Dnode* llink;
    int data;
    struct Dnode* rlink;
}Dnode;

typedef struct Deque{
    Dnode* front;
    Dnode* rear;
    int size;
}Deque;

void initDeque (Deque* DQ){
    DQ->front = DQ->rear = NULL;
    DQ->size = 0;
}

Dnode* creatDnode(int data){
    Dnode* temp = (Dnode*)malloc(sizeof(Dnode));
    temp->llink = temp->rlink = NULL;
    temp->data = data;

    return temp;
}

void pushFrontDeque(Deque* DQ, Dnode* input){
    if(DQ->size == 0){
        DQ->front = DQ->rear = input;
    }
    else{
        input->rlink = DQ->front;
        DQ->front->llink = input;
        DQ->front = input;
    }
    DQ->size++;
}

void pushBackDeque(Deque* DQ, Dnode* input){
    if(DQ->size == 0){
        DQ->rear = DQ->front = input;
    }
    else{
        input->llink = DQ->rear;
        DQ->rear = DQ->rear->rlink = input;
    }
    DQ->size++;
}

int popFrontDeque(Deque* DQ){
    int data;
    Dnode* temp = NULL;

    if(DQ->size != 0){
        data = DQ->front->data;
        temp = DQ->front;
        DQ->front = DQ->front->rlink;
        if(!DQ->front) DQ->rear = NULL;
        else DQ->front->llink = NULL;
        DQ->size--;
        free(temp);
        temp = NULL;
        return data;
    }
    else {return -1;}
}

int popBackDeque(Deque* DQ){
    int data;
    Dnode* temp = NULL;

    if (DQ->size != 0){
        data = DQ->rear->data;
        temp = DQ->rear;
        DQ->rear = DQ->rear->llink;
        if(!DQ->rear) DQ->front = NULL;
        else DQ->rear->rlink = NULL;
        DQ->size--;
        free(temp);
        temp = NULL;
        return data;
    }

    else{return -1;}
}

int emptyDeque(Deque* DQ){
    return DQ->size == 0;
}

int frontDeque(Deque* DQ){
    if(DQ->size != 0){
        return DQ->front->data;
    }
    else{
        return -1;
    }
}

int BackDeque(Deque* DQ){
    if(DQ->size != 0){
        return DQ->rear->data;
    }
    else{
        return -1;
    }
}

int main () {
    int N, temp;
    Deque DQ;
    char control[11] = "";
    scanf("%d", &N);
    initDeque(&DQ);

    while(N--){
        memset(control, 0, sizeof(control));
        scanf("%s", control);

        if(!strcmp("push_front", control)){
            scanf("%d", &temp);
            pushFrontDeque(&DQ, creatDnode(temp));
        }
        else if (!strcmp("push_back", control)){
            scanf("%d", &temp);
            pushBackDeque(&DQ, creatDnode(temp));
        }
        else if (!strcmp("pop_front", control)){
            printf("%d\n", popFrontDeque(&DQ));
        }
        else if (!strcmp("pop_back", control)){
            printf("%d\n", popBackDeque(&DQ));
        }
        else if (!strcmp("size", control)) {
            printf("%d\n", DQ.size);
        }
        else if (!strcmp("empty", control)) {
            printf("%d\n", emptyDeque(&DQ));
        }
        else if (!strcmp("front", control)) {
            printf("%d\n", frontDeque(&DQ));
        }
        else {
            printf("%d\n", BackDeque(&DQ));
        }
    }
}