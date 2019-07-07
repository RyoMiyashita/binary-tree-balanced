#include <stdio.h>
#include "tree.h"

int main(void) {
  printf("start create tree\n");

  node rootNode;
  node *addNode, *addNode1, *addNode2, *addNode3;
  int code;
  rootNode = *newNode(10);
  initTree(&rootNode);
  
  addNode = newNode(3);
  code = insertNode(addNode);
  exitifError(code);
  addNode1 = newNode(30);
  code = insertNode(addNode1);
  exitifError(code);
  addNode2 = newNode(5);
  code = insertNode(addNode2);
  exitifError(code);
  addNode3 = newNode(6);
  code = insertNode(addNode3);
  exitifError(code);

  printf("\nroot\n");
  printNode(&rootNode);
  printf("\nadd0\n");
  printNode(addNode);
  printf("\nadd1\n");
  printNode(addNode1);
  printf("\nadd2\n");
  printNode(addNode2);
  printf("\nadd3\n");
  printNode(addNode3);
  

  return 0;
}
