// Program to malloc and free
// Written by M17X

#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

struct node {
    int data;
    struct node *next;
};

struct node *create_new_node(int value);
struct node *free_list(struct node *head);
struct node *create_list(void);
struct node *remove_tail(struct node *head);
void print_list(struct node *head);

int main(void) {

    struct node *list = create_list();
    printf("\nList:\n");
    print_list(list);

    list = remove_tail(list);
    printf("\nList after freeing the last node:\n");
    print_list(list);

    list = free_list(list);
    printf("\nList after freeing:\n");
    print_list(list);

    printf("\n");

    return 0;
}

// 2. Remove last node
struct node *remove_tail(struct node *head) {
    // 1. if linked list is empty
    if (head == NULL) {
        return head;
    }

    // 2. if linked list only has one node
    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    // 3. if linked list has several nodes
    struct node *curr = head;
    while(curr->next->next != NULL) {
        curr = curr->next;
    }

    struct node *temp = curr->next;
    curr->next = NULL;
    free(temp);

    return head;
}

// 3. free the head
struct node *free_list(struct node *head) {
    while (head != NULL) {
        struct node *temp = head;
        head = head->next;
        free(temp);
    }
    return NULL;
}

// 1. how to make a node
struct node *create_new_node(int value) {
    // declare
    struct node *new = malloc(sizeof(struct node));

    // set values of all fields
    new->data = value;
    new->next = NULL;

    return new;
}

struct node *create_list(void) {
    int array[SIZE] = {7, 8, 9, 10, 11, 12};
    struct node *head = create_new_node(array[0]);
    struct node *current = head;

    for (int i = 1; i < SIZE; i++) {
        current->next = create_new_node(array[i]);
        current = current->next;
    }

    return head;
}

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}