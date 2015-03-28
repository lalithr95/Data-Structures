//Deleting a Binary tree involves post order traversing

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newnode(int data)
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void deletenode(struct node* node)
{
    if(node == NULL)
        return;
    deletenode(node->left);
    deletenode(node->right);
    free(node); // deallocating memory for node
}

int main()
{
    struct node* head = newnode(15);
    head->left = newnode(10);
    head->right = newnode(20);
    head->left->left = newnode(5);
    head->left->right = newnode(13);

    deletenode(head);
    head = NULL;// Root node will be deallocated which need to be intialized to NULL --dangling pointer
    //printf("%d",head);
    return 0;
}
