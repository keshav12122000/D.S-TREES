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
     struct node* node = (struct node*) malloc(sizeof(struct node));
     node->data = data;
     node->left = NULL;
     node->right = NULL;

     return(node);
}
//rootnode leftnode rightnode
void preorder(struct node* node)
{
     if (node == NULL)
 {
    return;
 }
     printf("%d ", node->data);
     preorder(node->left);
     preorder(node->right);
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
