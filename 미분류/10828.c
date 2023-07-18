#include <stdio.h>
#include <string.h>

typedef struct ArrayStack {
    int top;
    int stack[10000];
}ArrayStack;

void initStack (ArrayStack* AS){
    AS->top = -1;
}

void pushStack(ArrayStack* AS, int data){
    AS->stack[++AS->top] = data;
}

int popStack(ArrayStack* AS){
    if (AS->top == -1){
        return -1;
    }
    return AS->stack[AS->top--];
}

int sizeStack(ArrayStack* AS){
    return AS->top + 1;
}

int topStack(ArrayStack* AS){
    if (AS->top == -1){
        return -1;
    }
    return AS->stack[AS->top];
}

int emptyStack(ArrayStack* AS){
    return AS->top == -1;
}

int main () {
    int N, temp;
    ArrayStack AS;
    char control[6] = "";
    scanf("%d", &N);
    initStack(&AS);

    while(N--){
        memset(control, 0, sizeof(control));
        scanf("%s", control);

        if(!strcmp("push", control)){
            scanf("%d", &temp);
            pushStack(&AS, temp);
        }
        else if (!strcmp("top", control)){
            printf("%d\n", topStack(&AS));
        }
        else if (!strcmp("size", control)){
            printf("%d\n", sizeStack(&AS));
        }
        else if (!strcmp("empty", control)){
            printf("%d\n", emptyStack(&AS));
        }
        else{
            printf("%d\n", popStack(&AS));
        }
    }
}