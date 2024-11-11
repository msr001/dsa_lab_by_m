#include<stdio.h>
#include<stdlib.h>
#define n 10
int queue[n],front=0,rear=-1,item;
void qinsert()
{
    if(rear==n-1)
    printf("\n queue overflow");
    else
    {
        printf("\n Enter an item :");
        scanf("%d",&item);
        rear++;
        queue[rear]=item;
    }
}
void qdelete()
{
    if(rear==front-1)
    printf("\n queue underflow");
    else if(rear==front)
    {
        printf("\n this is the last element in the queue");
        printf("\n the last element deleted is %d",queue[front]);
        front=0;
        rear=-1;
    }
    else
    {
        printf("\n deleted item is %d",queue[front]);
        front++;
    }
}
void qdisplay()
{
    int i;
    if(rear==front-1)
    printf("\n\t no elements in queue");
    else
    {
        printf("\nqueue");
        for(i=front;i<=rear;i++)
        printf("%d\t",queue[i]);
    }
}
void main()
{
    int ch;
    while(1)
    {
        printf("\n queue implementation using array");
        printf("\n***********************************");
        printf("\n 1. insert");
        printf("\n 2. delete");
        printf("\n 3. display");
        printf("\n 4. exit");
        printf("\n enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: qinsert();
                    qdisplay();
                    break;
            case 2: qdelete();
                    qdisplay();
                    break;
            case 3: qdisplay();
                    break;
            case 4: exit(0);
        }
    }
}