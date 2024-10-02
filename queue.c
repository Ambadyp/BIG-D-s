#include <stdio.h>
int front=-1,rear=-1,n,y;
int queue[30];
void enqueue();
void dequeue();
void display();
void main()
{
    int ch;
    printf("\nenter the size of the array\n");
    scanf("%d",&n);
   
    do
    {
         printf("\nEnter the required operation:\n 1.Insertion\n2.Deletion\n3.Display\n");
    scanf("%d",&ch);
         
        switch(ch)
        {
            case 1:enqueue();
            break;
            case 2:dequeue();
            break;
            case 3:display();
            break;
           
            default:printf("invalid input");
          }
      printf("\ndo you want to continue enter y or Y\t");
    scanf("%s",&y);
    }   while(y=='y');
}
void enqueue()
{
    int E;
    if(rear==n-1)
    {
        printf("overflow");
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        printf("\nenter the first queue element\n");
        scanf("%d",&E);
        printf("%dis inserted into the queue",E);
        queue[rear]=E;
        
    }
    else
    {
        rear++;
        printf("\nenter the  queue element\n");
        scanf("%d",&E);
         queue[rear]=E;
         printf("%dis inserted into the queue\n",E);
       
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("underflow\n");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        int x;
        x=queue[front];
        front++;
        printf("%d is deleted from the queue\n",x);
        
    }
}
void display()
{
    int i;
if(front==-1&&rear==-1)
{
    printf("The queue is empty\n");
}
else
{
     printf("the queue elements are :");
    for(i=front;i<rear+1;i++)
    {
       
        printf("%d\t",queue[i]);
    }
}
}