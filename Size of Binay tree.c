#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;

};

struct node* newNode(int data)
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;

}

int size(struct node* head)
{

    if(head == NULL)
        return 0;
    else
        return (size(head->left)+1+size(head->right));
}

int main()
{

    struct node* root;
    root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);

    printf("SIZE is %d",size(root));
    return 0;
}
