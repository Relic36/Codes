//wap to create sum off all nodes in a binasry tree

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

int sumOfNodes(struct node *node){
    if (node == NULL)
        return 0;
    return node->data + sumOfNodes(node->left) + sumOfNodes(node->right);
}

int main(){
    struct node *root = NULL;
    root = insertNode(root, 50);
    root = insertNode(root, 10);
    root = insertNode(root, 30);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 70);
    root = insertNode(root, 60);
    root = insertNode(root, 80);
    root = insertNode(root, 90);

    int sum = sumOfNodes(root);
    printf("Sum of all nodes in the binary tree: %d\n", sum);

    return 0;
}