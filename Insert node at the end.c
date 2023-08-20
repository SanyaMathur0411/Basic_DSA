
#include <stdio.h>
#include <stdlib.h>
struct node
{
   int data;
   struct node *next;
};
struct node *head,*tail=NULL;
void addNode(int input)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data=input;
    newNode->next=NULL;
    if (head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else 
    {
        tail->next=newNode;
        tail=newNode;
    }
}
void display()
{
    if(head==NULL)
    {
        printf("The list is empty");
    }
    else
    {
        struct node *current=head;
        while(current!=NULL)
        {
            printf("%d ",current->data);
            current=current->next;
        }
    }
}
int main() {
   addNode(5);
   addNode(15);
   addNode(25);
   addNode(35);
   addNode(45);
    display();
    printf("\n Enter the value you want to add at the end of the list ");
    int num;
    scanf("%d",&num);
    addNode(num);
    display();
    return 0;
}
