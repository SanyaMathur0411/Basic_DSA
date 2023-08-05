
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
    printf("Enter number of nodes");
    int n;int num;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        printf("Enter number on node %d",i);
        scanf("%d",&num);
        addNode(num);
        
    }
    display();
    return 0;
}
