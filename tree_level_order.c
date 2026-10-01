#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUEUE 20

typedef struct Node {
    char name[30];
    struct Node *firstChild;
    struct Node *nextSibling;
} Node;

Node *createNode(const char *name) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    strcpy(newNode->name, name);
    newNode->firstChild = NULL;
    newNode->nextSibling = NULL;
    return newNode;
}

void addChild(Node *parent, Node *child) {
    if (parent->firstChild == NULL) {
        parent->firstChild = child;
    } else {
        Node *temp = parent->firstChild;
        while (temp->nextSibling != NULL) {
            temp = temp->nextSibling;
        }
        temp->nextSibling = child;
    }
}

void levelOrder(Node *root) {
    Node *queue[MAX_QUEUE];
    int front = 0, rear = 0;

    if (root == NULL) return;
    queue[rear++] = root;

    while (front < rear) {
        Node *current = queue[front++];
        printf("%s", current->name);

        if (front < rear || current->firstChild != NULL)
            printf(" -> ");

        Node *child = current->firstChild;
        while (child != NULL) {
            queue[rear++] = child;
            child = child->nextSibling;
        }
    }
    printf("\n");
}

void freeTree(Node *root) {
    if (root == NULL) return;
    Node *child = root->firstChild;
    while (child != NULL) {
        Node *next = child->nextSibling;
        freeTree(child);
        child = next;
    }
    free(root);
}

int main(void) {
    /* Part (a): Construct the organisational hierarchy. */
    Node *CEO = createNode("CEO");
    Node *HR = createNode("HR");
    Node *Finance = createNode("Finance");
    Node *IT = createNode("IT");
    Node *Development = createNode("Development");
    Node *Testing = createNode("Testing");
    Node *Frontend = createNode("Frontend");
    Node *Backend = createNode("Backend");

    addChild(CEO, HR);
    addChild(CEO, Finance);
    addChild(CEO, IT);
    addChild(IT, Development);
    addChild(IT, Testing);
    addChild(Development, Frontend);
    addChild(Development, Backend);

    printf("Organisational Hierarchy - Level Order Traversal\n");
    printf("------------------------------------------------\n");
    printf("CEO -> {HR, Finance, IT}\n");
    printf("IT -> {Development, Testing}\n");
    printf("Development -> {Frontend, Backend}\n\n");
    printf("Level-order traversal:\n");
    levelOrder(CEO);

    freeTree(CEO);
    return 0;
}
