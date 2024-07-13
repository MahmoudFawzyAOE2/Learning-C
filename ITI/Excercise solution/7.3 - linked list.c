#include <stdio.h>
#include <stdlib.h>

/* Linked list In Stack (LIFO) */
struct node {
    int data;           // Value held by the node
    struct node *link;  // Link to the next node
};
typedef struct node *pointer;

void push_node(pointer *top, int *n_elements, int *size);
int pop_node(pointer *top, int *n_elements);
void display_stack (pointer *top);

int main(void) {
    struct node *top = NULL; // Initialize top as NULL
    int size, user_order, n_elements;
    printf("\nEnter  size of Stack:");
    scanf("%d", &size);

    while(1)
    {
        printf("Enter you order to the stack ");
        printf("(1: push, 2:pop, 3:exit): ");
        scanf("%d", &user_order);

        if (user_order==1)/*push*/
            push_node(&top, &n_elements, &size);

        else if (user_order== 2)/*pop*/
        {
            int popped_value = pop_node(&top, &n_elements);
            printf("\n popped_value  %d\n", popped_value);
        }
        else if (user_order== 3)/*exit*/
               break;
        display_stack (&top);
    }
    display_stack (&top);
}

void push_node(pointer *top, int *n_elements, int *size)
{
    // Create a new node with memory allocation
    pointer new_node = (pointer)malloc(sizeof(struct node));

    if (*n_elements >= *size) {
        printf("Stack overflow\n");
        return;  // Exit if allocation fails
    }

    // Get the value to be pushed
    int value;
    printf("Push value : ");
        scanf("%d", &value);

    // Assign value and link the new node
    new_node->data = value;
    new_node->link = *top;

    // Update the top pointer
    *top = new_node;
    *n_elements += 1;
}

int pop_node(pointer *top, int *n_elements)
{
    if (*top == NULL)
    {
        printf("Stack underflow\n");
        return NULL; // Or any invalid value to indicate error
    }
    int temp = (*top)->data;
    (*top) = (*top)->link;
    *n_elements -= 1;
    return temp;
}

void display_stack (pointer *top)
{
    pointer ptr = *top;  // Initialize traverse pointer
    printf("\nStack: ");
    while (ptr) {
        printf("%d  ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n\n");
}
