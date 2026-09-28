/*Question: Write a C program to delete a given node from a BST. Handle deletion of:
1. Leaf node
2. Node having one child
3. Node having two children
4. Write a C++ program to search for a given element in a BST and find its minimum and maximum elements.
5.Write a C/C++ program to create a Binary Search Tree by inserting n elements and display its inorder, preorder and postorder traversals.
*/

#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node *newNodeCreate(int value){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->left = temp->right = NULL;
    return temp;
}

struct node *insertNode(struct node *node, int value){
    if (node == NULL)
        return newNodeCreate(value);
    if (value < node->data)
        node->left = insertNode(node->left, value);
    else if (value > node->data)
        node->right = insertNode(node->right, value);
    return node;
}

struct node *minValueNode(struct node *node){
    struct node *current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

struct node *maxValueNode(struct node *node){
    struct node *current = node;
    while (current && current->right != NULL)
        current = current->right;
    return current;
}

struct node *deleteNode(struct node *root, int value){
    if (root == NULL)
        return root;
    if (value < root->data)
        root->left = deleteNode(root->left, value);
    else if (value > root->data)
        root->right = deleteNode(root->right, value);
    else {
        // Node with only one child or no child
        if (root->left == NULL) {
            struct node *temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        // Node with two children: Get the inorder successor (smallest in the right subtree)
        struct node *temp = minValueNode(root->right);
        // Copy the inorder successor's content to this node
        root->data = temp->data;
        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

struct node *searchNode(struct node *root, int value){
    if (root == NULL || root->data == value)
        return root;
    if (value < root->data)
        return searchNode(root->left, value);
    return searchNode(root->right, value);
}

void preorder(struct node *root){
    if (root == NULL)
        return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root){
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void postorder(struct node *root){
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main(void){
    struct node *root = NULL;
    int value;

    root = insertNode(root, 50);
    root = insertNode(root, 10);
    root = insertNode(root, 30);
    root = insertNode(root, 20);
    root = insertNode(root, 18);
    root = insertNode(root, 40);
    root = insertNode(root, 70);
    root = insertNode(root, 60);
    root = insertNode(root, 80);
    root = insertNode(root, 90);

    printf("Inorder traversal of the given tree: ");
    inorder(root);
    printf("\n");
    printf("Postorder traversal of the given tree: ");
    postorder(root);
    printf("\n");
    printf("Preorder traversal of the given tree: ");
    preorder(root);
    printf("\n");

    printf("Enter the value to search: ");
    if (scanf("%d", &value) != 1)
        return 1;
    struct node *found = searchNode(root, value);
    if (found != NULL) {
        printf("Value %d found in the tree.\n", value);
    } else {
        printf("Value %d not found in the tree.\n", value);
    }

    printf("minimum value in the tree: %d\n", minValueNode(root)->data);
    printf("maximum value in the tree: %d\n", maxValueNode(root)->data);

    printf("Enter the value to delete: ");
    if (scanf("%d", &value) != 1)
        return 1;
    printf("\n");

    root = deleteNode(root, value);
    printf("Inorder traversal after deletion: ");
    inorder(root);
    printf("\n");
    printf("Postorder traversal after deletion: ");
    postorder(root);
    printf("\n");
    printf("Preorder traversal after deletion: ");
    preorder(root);
    printf("\n");
    return 0;
}