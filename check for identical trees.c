//http://www.geeksforgeeks.org/write-c-code-to-determine-if-two-trees-are-identical/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int x)
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->left = NULL;
    temp->data = x;
    temp->right = NULL;
    return temp;
}

int ifEqual(struct node* temp1,struct node* temp2)
{
    if(temp1 == NULL && temp2 == NULL)
        return 1;
    else if(temp1!=NULL && temp2!=NULL)
    {
        // if two trees have few nodes
        return
        (
         temp1->data = temp2->data &&
         ifEqual(temp1->left,temp2->left) &&
         ifEqual(temp1->right,temp2->right)
         );
    }
    return 0;
    // if above cases doesnot satify return false
}

int main()
{
    struct node *temp1,*temp2;
    temp1 = newNode(1);
    temp2 = newNode(1);
    temp1->left = newNode(2);
    temp2->left = newNode(2);
    temp1->right = newNode(3);
    temp2->right = newNode(3);
    if(ifEqual(temp1,temp2))
        printf("Both Trees are equal\n");
    else
        printf("Both Trees are not equal\n");

    return 0;

}
