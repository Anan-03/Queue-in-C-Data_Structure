#include<stdio.h>
#include<stdlib.h>
#define size 10
int front=-1,rear=-1,arr[size];

int underflow()
{
    if(front==-1 && rear==-1)
        return 1;
    else
        return 0;
}
int overflow()
{
    if(rear==size-1)
        return 1;
    else
        return 0;
}
void enqueue()
{
    if(overflow())
        printf("\nQueue is overflow");
    else
    {
        int x;
        printf("\nEnter item to enqueue: ");
        scanf("%d",&x);
            if(front==-1)
                  front=0;
        rear++;
        arr[rear]=x;
        printf("\n %d enqueued successfully",arr[rear]);
    }
}
void dequeue()
{
    if(underflow())
        printf("\nQueue is underflow");
    else
    {
        printf("\n%d dequeued successfully",arr[front]);
        front++;
            if(front>rear)
                front=rear=-1;
    }
}
void display()
{
    if(underflow())
        printf("\nQueue is underflow");
    else
    {
        int i;
        printf("\n Queue is- ");
        for(i=front;i<=rear;i++)
            printf("%d ",arr[i]);
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("\n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit");
        printf("\n Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: enqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);

            default: printf("\nWrong choice");
        }
    }
    return 0;
}