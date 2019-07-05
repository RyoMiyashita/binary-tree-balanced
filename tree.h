#include "node.h"

node *rootNode;

void initTree();

void initTree(node *root) {
    initNode(rootNode, root->key);
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
            } else {
                currentNode = currentNode->left;
                currentNode->leftHeight = currentNode->leftHeight++;
            }
        } else {
            if (NULL == currentNode->right) {
                n->parent = currentNode;
                currentNode->right = n;
            } else {
                currentNode = currentNode->right;
                currentNode->rightHeight = currentNode->rightHeight++;
            }
        }
    }
}
