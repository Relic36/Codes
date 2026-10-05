//wap to search for a given element in a binary tree
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
int searchElement(struct node *node, int value){
    if (node == NULL)
        return 0;
    if (value < node->data)
        return searchElement(node->left, value);
    else if (value > node->data)
        return searchElement(node->right, value);
    else
        return 1;
}

int main(){
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

    printf("Enter the value to search: ");
    if (scanf("%d", &value) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (searchElement(root, value))
        printf("Element %d found in the tree\n", value);
    else
        printf("Element %d not found in the tree\n", value);

    return 0;
}