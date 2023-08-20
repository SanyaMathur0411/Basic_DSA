#include <stdio.h>  
#include <stdlib.h>  
struct node{  
    int data;  
    struct node *next;  
};      
   

struct node *head, *tail = NULL;  
   

void addNode(int data) {  

    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->next = NULL;  
     

    if(head == NULL) {  

        head = newNode;  
        tail = newNode;  
    }  
    else {  

        tail->next = newNode;  
 
        tail = newNode;  
    }  
}  
   
void middlenode()
{
    printf("\n Enter position at which you want new node:");
    int pos;
    scanf("%d", &pos);

    if (pos <= 0) {
        printf("Invalid position\n");
        return;
    }

    struct node *ptr = head;
    int count = 1;
    while (ptr != NULL)
    {
        if (count == pos)
        {
            break;
        }
        else
        {
            ptr = ptr->next;
            count++;
        }
    }

    if (ptr == NULL)
    {
        printf("Position out of range\n");
        return;
    }

    struct node *middleNode = (struct node *)malloc(sizeof(struct node));
    if (middleNode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    printf("\n Enter the data for middle Node ");
    int value;
    scanf("%d", &value);
    middleNode->data = value;
    middleNode->next = ptr->next;
    ptr->next = middleNode;
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
int  main()
{

 
   
    addNode(5);
    addNode(10);
    addNode(15);
    addNode(20);
    addNode(25);
    addNode(30);
    display();
   middlenode();
   display();
   
   
   
    return 0;
}
