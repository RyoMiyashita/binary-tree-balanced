#include <stdio.h>

typedef struct node {
    int key;
    char *value;
    struct node *parent;
    struct node *left;
    struct node *right;
    int leftHeight;
    int rightHeight;
} node;

void initNode(node *n, int key);
void printNode(node *n);

void initNode(node *n, int key) {
    n->key = key;
    n->value = NULL;
    n->parent = NULL;
    n->left = NULL;
    n->right = NULL;
    n->leftHeight = 0;
    n->rightHeight = 0;
}

void printNode(node *n) {
    printf("node pinter: %p\n", n);
    printf("key:         %d\n", n->key);
    printf("value:       %s\n", n->value);
    printf("parent:      %p\n", n->parent);
    printf("left:        %p\n", n->left);
    printf("right:       %p\n", n->right);
    printf("leftHeight:  %d\n", n->leftHeight);
    printf("right:       %d\n", n->right);
}

