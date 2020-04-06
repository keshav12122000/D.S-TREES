//PREORDER TRAVERSAL
#include <stdio.h>
#include <stdlib.h>
struct node
{
     int data;
     struct node* left;
     struct node* right;
};
struct node* temp(int data)
{
     struct node* y = (struct node*) malloc(sizeof(struct node));
     y->data = data;
     y->left = NULL;
     y->right = NULL;

     return(y);
}
//rootnode leftnode rightnode
void preorder(struct node* x)
{
     if (x == NULL)
 {
    return;
 }
     printf(" %d ", x->data);
     preorder(x->left);
     preorder(x->right);
}
int main()
{
     struct node *root;
     root             = temp(1);
     root->left       = temp(2);
     root->right      = temp(3);
     root->left->left = temp(4);
     root->left->right= temp(5);
     printf("Preorder traversal is :\n");
     preorder(root);
     return 0;
}
