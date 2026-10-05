// find height of binary tree
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
int heightOfTree(struct node *node){
    if (node == NULL)
        return 0;
    else {
        int leftHeight = heightOfTree(node->left);
        int rightHeight = heightOfTree(node->right);
        if (leftHeight > rightHeight)
            return leftHeight + 1;
        else
            return rightHeight + 1;
    }
}

int main(){
    struct node *root = NULL;
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

    int height = heightOfTree(root);
    printf("Height of the binary tree: %d\n", height);

    return 0;
}