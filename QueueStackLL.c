#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};
struct node *front=NULL, *rear=NULL;

void enqueue(int val)
{
    struct node *newNode= malloc(sizeof(struct node));
    newNode->data=val;
    newNode->next=NULL;
    if(front==NULL && rear==NULL){
    front=rear=newNode;
}

else{
    rear->next=newNode;
    rear=newNode;
}
}

void dequeue()
{
    struct node* temp;
    if(front==NULL)
    {
        printf("queue is empty");
    }
    else
    {
        temp=front;
        front=front->next;
        if (front ==NULL)
            rear=NULL;
            free(temp);
    }
}

struct node *head=NULL;

void push(int val)
{
    struct node *newNode= malloc(sizeof(struct node));
    newNode->data=val;
    newNode->next=head;
    head=newNode;

}

void pop()
{
    struct node* temp;
    if(head==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        printf("\npopped element is=%d->",head->data);
        temp=head;
        head=head->next;
        free(temp);
    }
}
void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}

void printlist()
{
    struct node *temp=front;
    while(temp)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(40);
    printf("Queue:");
    printlist();
    dequeue();
    dequeue();
    printf("\nAfter dequeue:");
    printlist();

    push(10);
    push(30);
    push(50);
    printf("Stack:");
    display();
    pop();
    pop();
    printf("\nAfter popping");
    display();

}
