#include <stdio.h>
#include "tree.h"

int main(void) {
  printf("start create tree\n");

  node rootNode;
  rootNode = *newNode(10);
  printNode(&rootNode);

  node *addNode;
  initTree(&rootNode);
  addNode = newNode(3);
  insertNode(addNode);
  printf("next\n");
  printNode(addNode);
  addNode = newNode(3);
  insertNode(addNode);
  printf("root\n");
  printNode(&rootNode);
  printf("next\n");
  printNode(addNode);

  return 0;
}
