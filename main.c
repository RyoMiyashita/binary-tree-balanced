#include <stdio.h>
#include "tree.h"

int main(void) {
    printf("start create tree\n");

    node rootNode;
    initNode(&rootNode, 1);
    printNode(&rootNode);

    return 0;
}
