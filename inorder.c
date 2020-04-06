//INORDER TRAVERSAL
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
    //creating a node
     struct node* y = (struct node*) malloc(sizeof(struct node));
     y->left = NULL;
     y->data = data;
     y->right = NULL;

     return(y);
}
//leftnode rootnode rightnode
void Inorder(struct node* x)
{
     if (x == NULL)
 {
   return;
 }
     Inorder(x->left);
     printf(" %d ", x->data);
     Inorder(x->right);
}
int main()
{
    //structure of tree
     struct node *root    = temp(1);
     root->left           = temp(2);
     root->right          = temp(3);
     root->left->left     = temp(4);
     root->left->right    = temp(5);
     printf("Inorder traversal is : \n");
     Inorder(root);
     return 0;
}
