#include <stdlib.h>
#include "node.h"

node *rootNode;

void initTree(node*);
int insertNode(node*);
void exitifError(int);


void initTree(node *root) {
    rootNode = root;
}

/**
 * retrn 11 : Dupulicate Key
 */
int insertNode(node *n) {
    node *currentNode = rootNode;
    while (1)
    {
        if (currentNode->key == n->key) return 11;
        if (currentNode->key > n->key) {
            currentNode->leftHeight++;
            if (NULL == currentNode->left) {
                n->parent = currentNode;
                currentNode->left = n;
                break;
            } else {
                currentNode = currentNode->left;
            }
        } else {
            currentNode->rightHeight++;
            if (NULL == currentNode->right) {
                n->parent = currentNode;
                currentNode->right = n;
                break;
            } else {
                currentNode = currentNode->right;
            }
        }
    }
    return 0;
}

void exitifError(int code) {
    switch (code)
    {
    case 11:
        printf("\nDpulicate Key\n");
        exit(1);
        break;
    
    case 0:
        break;
    
    default:
        printf("\nUnknown Error\n");
        exit(1);
        break;
    }
}
