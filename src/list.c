#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int value;
  struct Node *next;
} Node;

// Prints Node's value
void printNode(Node *node) {
  printf("Node(%d)->", node->value);
}

// Prints all nodes in the list
void printList(Node *head) {
  Node *current = head;
  while (current != NULL) { 
    printNode(current);
    current = current->next;
  }
  printf("NULL\n");
}

// Adds a Node to head
void addNode(Node **head, int value) {
  // head is a double pointer because it is not allocated in main
  Node *node = malloc(sizeof(Node));
  node->value = value;
  node->next = NULL;

  if (head != NULL) {
    node->next = *head;
  }
  *head = node;
}

int main(void) {

  Node *head = NULL;

  addNode(&head, 13);
  addNode(&head, 7);
  addNode(&head, 90);

  printList(head);

  return EXIT_SUCCESS;
}
