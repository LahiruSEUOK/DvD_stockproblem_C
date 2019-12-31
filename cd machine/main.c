#include <stdio.h>
#include <stdlib.h>
#define max 10
#define TRUE 1
#define FALSE 2

typedef char qelement;
int i;

// creating basic requirements

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

//creating queue
void createqueue(queue *q)
{
 q->count=0;
 q->front =-1;
 q->rear= -1;
}
void displaystock(queue *q);
void addtostock(queue *q);
//void displaynextorder();
//void displayalloders();
//void addorder();
//void processnextorder();
//void reverselastorder();
//void displaylastorder();


//int isqueuefull(queue *q);
int isqueuefull(queue *q)
{
    if(q->count==max)
        return 1;
    else
        return 0;
}

int isqueueempty(queue *q)
{
    if(q->front==-1)
        return 1;
    else
        return 0;
}
/* basic finished */

// operations

void displaystock(queue *q)
{
if(isqueueempty(q)==1)
    printf("Stock is empty\n");
else
{
    for(i=0;i<q->count;i++)
    {
        printf("%d\t",q->items[i]);
    }
}
}

void addtostock(queue *q)
{
    if(isqueuefull(q)==1)
        printf("Stock is full\nCannot add more\n");
    else
    {
    char id[max];
    printf("Enter Game ID\n");
    scanf("%d",&id[q->count]);
    q->items[q->count]=id[q->count];
    q->count++;
    }
}





// main display functions
int main()
{
    int input;

    printf("What would you like to do\n");
    printf("[1] - Display Current Stock\n");
    printf("[2] - Add a game to Stock\n");
    printf("[3] - Display next Order\n");

    queue g;
    createqueue(queue *g);
    scanf("%d",&input);
    switch(input)
    {
        case 1 : displaystock(queue*q);break;
    }



    return 0;
}
