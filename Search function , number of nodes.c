#include <stdio.h>
#include <stdlib.h>
//Represent a node of singly linked list
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


void display() {

    struct node *current = head;

    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Nodes of singly linked list: \n");
    while(current != NULL) {
        //Prints each node by incrementing pointer
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
void search(int smthg)
{    int count=0;
     int flag=0;
     struct node *ptr=head;
    while (ptr!=NULL)
    {  count++;

        if(ptr->data==smthg)
        {
            printf("Number found at position %d \n",count);
            flag++;
        }
        ptr=ptr->next;
    }
    if(flag==0)
    {
        printf("Number not found \n");
    }
    printf("Number of nodes=%d",count);
}
int  main()
{

    printf("Enter the number you want to search");
    int n;
    scanf("%d",&n);
    addNode(5);
    addNode(10);
    addNode(15);
    addNode(20);
    addNode(25);
    addNode(30);
    display();
   search(n);


    return 0;
}
