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
     struct node* node =(struct node*) malloc(sizeof(struct node));
     node->left = NULL;
     node->right = NULL;
     node->data = data;
     return(node);
}
//leftnode rightnode rootnode
void postorder(struct node* node)
{
     if (node == NULL)
 {
   return;
 }
     postorder(node->left);
     postorder(node->right);
     printf("%d ", node->data);
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
