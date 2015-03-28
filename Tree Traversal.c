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

void inorder(struct node* node)
{
    if(node == NULL)
        return;
    inorder(node->left);
    printf("Data is %d\n",node->data);
    inorder(node->right);
}

void preorder(struct node* node)
{

    if(node == NULL)
        return;
    preorder(node->left);
    preorder(node->right);
    printf("Data is %d\n",node->data);
}

void postorder(struct node* node)
{

    if(node == NULL)
        return;
    printf("Data is %d\n",node->data);
    postorder(node->left);
    postorder(node->right);
}

int main()
{

    struct node* head = newnode(15);
    head->left = newnode(10);
    head->right = newnode(20);
    head->left->left = newnode(5);
    head->left->right = newnode(13);

    inorder(head);
    preorder(head);
    postorder(head);
    return 0;
}
