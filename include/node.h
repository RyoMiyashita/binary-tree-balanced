#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int key;
    char *value;
    struct node *parent;
    struct node *left;
    struct node *right;
    int leftHeight;
    int rightHeight;
} node;

node *newNode(int key);
void printNode(node *n);

node* newNode(int key) {
    node *n;
    n = (node*)malloc(sizeof(node));
    n->key = key;
    n->value = NULL;
    n->parent = NULL;
    n->left = NULL;
    n->right = NULL;
    n->leftHeight = 0;
    n->rightHeight = 0;
    return n;
}

void printNode(node *n) {
    printf("node pinter: %p\n", n);
    printf("key:         %d\n", n->key);
    printf("value:       %s\n", n->value);
    printf("parent:      %p\n", n->parent);
    printf("left:        %p\n", n->left);
    printf("right:       %p\n", n->right);
    printf("leftHeight:  %d\n", n->leftHeight);
    printf("leftHeight:  %d\n", n->rightHeight);
}

