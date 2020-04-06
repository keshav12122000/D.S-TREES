//POSTORDER TRAVERSAL
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
     struct node* y =(struct node*) malloc(sizeof(struct node));
     y->left = NULL;
     y->right = NULL;
     y->data = data;
     return(y);
}
//leftnode rightnode rootnode
void postorder(struct node* x)
{
     if (x == NULL)
 {
   return;
 }
     postorder(x->left);
     postorder(x->right);
     printf(" %d ", x->data);
}
int main()
{
     struct node *root;
     root              = temp(1);
     root->left        = temp(2);
     root->right       = temp(3);
     root->left->left  = temp(4);
     root->left->right = temp(5);
     printf("Postorder traversal is : \n");
     postorder(root);
     return 0;
}
