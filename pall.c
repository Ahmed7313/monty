#include "monty.h"

/**
 * pall - Prints all values on the stack, starting from the top.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in the script (unused).
 */
void pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
    stack_t *current = *stack;

    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
