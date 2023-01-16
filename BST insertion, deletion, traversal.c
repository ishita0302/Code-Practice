#include <stdio.h>
#include <stdlib.h>
 
struct node 
{
    int key;
    struct node *left, *right;
};

struct node * newNode(int n);
void inorder(struct node* root);
void preorder(struct node* root);
void postorder(struct node* root);
struct node* deleteNode(struct node* root, int key);
struct node* min(struct node* node);

//function 1 
struct node* insert(struct node* node, int key)
{  
    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    return node;
}
 
//function 2
struct node * newNode(int n)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node*));
    temp->key = n;
    temp->left = temp->right = NULL;
    return temp;
}

int main()
{
    struct node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("\ninorder: \n");
    inorder(root);
    printf("\npreorder: \n");
    preorder(root);
    printf("\npostorder: \n");
    postorder(root);
    
    printf("\nDelete 20\n");
    root = deleteNode(root, 20);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);
 
    printf("\nDelete 30\n");
    root = deleteNode(root, 30);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);
 
    printf("\nDelete 50\n");
    root = deleteNode(root, 50);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);
 
    return 0;
}

//function 3
void inorder(struct node* root)
{
    if (root != NULL) 
    {
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);
    }
}

//function 4
void preorder(struct node* root)
{
    if (root != NULL) 
    {
        printf("%d \n", root->key);
        preorder(root->left);
        preorder(root->right);
    }
}

//function 5
void postorder(struct node* root)
{
    if (root != NULL) 
    {
        postorder(root->left);
        inorder(root->right);
        printf("%d \n", root->key);
    }
}

//function 6 of deletion
struct node* deleteNode(struct node* root, int key)
{
    if (root == NULL)
        return root;
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else 
    {
        if (root->left == NULL) 
        {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) 
        {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
        struct node* temp = min(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}

//function 7
struct node* min(struct node* node)
{
    struct node* c = node;
    while (c && c->left != NULL)
        c = c->left;
 
    return c;
}