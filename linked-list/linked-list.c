#include <stdlib.h>
#include <stdio.h>

struct Node {
    int val;
    struct Node *next;
};

typedef struct Node Node;

int getNodeSize(Node *n) {
    return sizeof *n;
}

void printListRecursive(Node *n) {
    if (n != NULL) {
        printf("%d\n", n->val);
        printListRecursive(n->next);
    }
}

void printListIterative(Node *n) {
    for (; n != NULL; n = n->next) {
        printf("%d\n", n->val);
    }
}

int countNodesRecursive(Node *n) {
    if (n == NULL) {
        return 0;
    }

    return 1 + countNodesRecursive(n->next);
}

int countNodesIterative(Node *n) {
    int count;

    for (count = 0; n != NULL; n = n->next) {
        count++;
    }

    return count;
}

Node *findInListRecursive(int x, Node *n) {
    if (n->val == x) {
        return n;
    }
    if (n == NULL) {
        return NULL;
    }

    return findInListRecursive(x, n->next);
}

Node *findInListIterative(int x, Node *n) {
    for (; n != NULL; n = n->next) {
        if (n->val == x) {
            return n;
        }
    }

    return NULL;
}

int main(void) {
    Node n;
    n.val = 12;

    Node n_2;
    n_2.val = 123;

    Node n_3;
    n_3.val = 43;

    n.next = &n_2;
    n_2.next = &n_3;

    printListRecursive(&n);
    printListIterative(&n);
    printf("\n");

    printf("Number of nodes (recursive): %d\n", countNodesRecursive(&n));
    printf("Number of nodes (iterative): %d\n", countNodesIterative(&n));
    printf("\n");

    printf("Address of %d in list is %p\n", 123, findInListIterative(123, &n));
    printf("Content of previous address: %d\n", findInListIterative(123, &n)->val);
    printf("Address of %d in list is %p\n", 12, findInListRecursive(12, &n));
    printf("Content of previous address: %d\n", findInListRecursive(12, &n)->val);
    printf("\n");


    return EXIT_SUCCESS;
}
