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



int main()
{
    struct node* head;
    head = newnode(5);
    head->left = newnode(10);
    head->right = newnode(15);
    return 0;
}
