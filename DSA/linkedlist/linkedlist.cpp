#include<iostream>
#include<stdlib.h>
// // class Node{
// //     public:
// //         int element;
// //         Node* next;
// // };
// // void printElement(Node *elements){
// //         while(NULL != elements)
// //         {
// //             std::cout<<elements->element<<std::endl;
// //         }
// //         return;
// // }

// int main()
// {
//     std::cout<<"Please enter the character: ";
//     char n{};
//     std::cin>>n;
//     std::cout<<n<<std::endl;

// }

class Node{
    public:
    int data;
    Node* next;
};

Node *head = NULL;
void append(int target)
{
    Node *newNode = (Node*)calloc(1,sizeof(Node));
    if(newNode == NULL)
    {
        return;
    }
    newNode->data = target;
    newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node *current = head;
    while(current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
}


void display()
{
    Node *linkedList = head;
    while(linkedList != NULL)
    {
        std::cout<<linkedList->data;
        linkedList = linkedList->next;
    }
    std::cout<<" ";

}

void deleteitem(int target)
{
    Node *linkedList = head;
    while(linkedList != NULL)
    {
        if(target = linkedList->data)
        {
            delete(linkedList->data);
        }
    }
    std::cout<<" ";
}

int main()
{
    append(5);

    display();

    deleteitem(5);
}