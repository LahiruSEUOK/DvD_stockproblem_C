#include <stdio.h>
#include <stdlib.h>
#define max 10
#define TRUE 1
#define FALSE 2

typedef char qelement;
int i;


typedef struct node
{
qelement entry;
struct node *next;

}Node;


typedef struct
{
    int count;
    Node *front;
    Node *rear;
    qelement items[max];
}queue;

queue *q;

int isqueuefull()
{
    if(q->count==max)
        return 1;
    else
        return 0;
}

int isqueueuempty()
{
    if(q->count==0)
        return 1;
    else
        return 0;
}

void displayqueue()
{
if(isqueueuempty()==1)
    printf("Stock is empty\n");
else
{
    for(i=0;i<q->count;i++)
    {
        printf("%d\t",q->items[i]);
    }
}
}


int main()
{
    printf("What would you like to do\n");
    printf("[1] - Display Current Stock\n");
    printf("[2] - Add a game to Stock\n");
    return 0;
}
