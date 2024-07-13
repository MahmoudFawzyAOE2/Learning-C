#include <stdio.h>
int pop_from_array (int arr[], int *current_size);
void push_to_array (int arr[], int *current_size, int max_size);
void display_array (int arr[], int size);

void main(void)
{
    int length, value_pop, current_size=-1, user_order;
    printf("Enter length of array: ");
    scanf("%d", &length);

    int stack_array[length];
    while(1)
    {
        printf("Enter you order to the stack ");
        printf("(1: push, 2:pop, 3:exit): ");
        scanf("%d", &user_order);

        if (user_order==1)/*push*/
                push_to_array (stack_array, &current_size, length);

        else if (user_order== 2)/*pop*/
        {
                value_pop = pop_from_array (stack_array, &current_size);
                printf("Popped value: %d ",value_pop);
        }
        else if (user_order== 3)/*exit*/
               break;
        display_array(stack_array, current_size);
    }
    display_array(stack_array, current_size);
}

int pop_from_array (int arr[], int *current_size)
{
    if (*current_size == 0)
    {
        printf("Error: cannot pop from an empty stack.\n");
        return -1; // Indicate error
    }
    int pop = arr[*current_size];
    *current_size = *current_size -1;
    return pop;
}

void push_to_array (int arr[], int *current_size, int max_size)
{
    if (*current_size == max_size-1)
    {
        printf("Error: Stack overflow (cannot push to a full stack).\n");
        return;
    }
    int push;
    printf("Enter value to push to array: ");
    scanf("%d", &push);

    *current_size = *current_size +1;
    arr[*current_size] = push;
}

void display_array (int arr[], int size)
{
    int i;
    printf("\ncurrent_size: %d", size);
    printf("\nStack: ");
    printf("%d ",arr[0]);
    for (i=1;i<size+1;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
