#include<stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node_t;

Node_t *head = NULL;


void append(int num)
{
    Node_t *Node1 = calloc(1,sizeof(Node_t));
    Node1->data = num;
    Node1->next = NULL;

/* If head doesnt contain any element adding it to the Head */
    if(head == NULL)
    {
        head = Node1;
        return;
    }

/*  checking for the whether head contains any elemets */  
    Node_t *current = head;
    while(current->next != NULL)
    {
        current = current->next;
    }

    /* Adding to the node at the end of the list in case when
    Elements present in the list */
    current->next = Node1;    
}
void display()
{
    Node_t *linkedList = head;
    printf(" [ ");
    while(linkedList != NULL)
    {
         
        printf(" %d",linkedList->data);
        linkedList = linkedList->next;
    }
    printf(" ] \n");

}

int search(int target)
{
    Node_t *linkedList = head;
    int i = 0;
    while(linkedList != NULL)
    {

        if(linkedList->data == target)
        {
            printf(" %d Found\n",i );
        }
        linkedList = linkedList->next;  
        i++;  
          
    }
    
    return 0;

}

void delete( int target)
{
    Node_t *Node = head;
    if(NULL == head)
    {
        return;
    }
    if(target == head->data)
    {   
        Node_t *Temphead = head;
        head->next = head;
        free(Temphead);
        return;
    }
    Node_t *current = head;
    while(current->next != NULL)
    {
        if(current->next->data == target)
        {
            Node_t *TempHead =  current->next;
            current->next = current->next->next;
            free(TempHead);
        }
        current = current->next;
    }

}

int main()
{

    append(3);
    append(4);
    append(6);
    append(1);
    append(5);
    append(3);
    append(7);
    append(4);
    append(22);
    append(5);
    search(4);
    display();
    delete(4);
    // delete(4);


    display();
}

            // while(head->data == target)
            // {
            //     Node_t *Temphead = head;
            //     head->next = head;
            //     free(Temphead);
            // }
            // // return;