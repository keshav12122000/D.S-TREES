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
     struct node* node = (struct node*) malloc(sizeof(struct node));
     node->left = NULL;
     node->data = data;
     node->right = NULL;

     return(node);
}
//leftnode rootnode rightnode
void Inorder(struct node* node)
{
     if (node == NULL)
 {
   return;
 }
     Inorder(node->left);
     printf("%d ", node->data);
     Inorder(node->right);
}
int main()
{
     struct node *root    = temp(1);
     root->left           = temp(2);
     root->right          = temp(3);
     root->left->left     = temp(4);
     root->left->right    = temp(5);
     printf("Inorder traversal is : \n");
     Inorder(root);
     return 0;
}
