#include "node.h"

node *rootNode;

void initTree();

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
            if (NULL == currentNode->left) {
                n->parent = currentNode;
                currentNode->left = n;
                currentNode->leftHeight++;
            } else {
                currentNode = currentNode->left;
            }
        } else {
            if (NULL == currentNode->right) {
                n->parent = currentNode;
                currentNode->right = n;
                currentNode->rightHeight++;
            } else {
                currentNode = currentNode->right;
            }
        }
    }
}
