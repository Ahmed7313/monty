#include "monty.h"

/**
 * push - Pushes an element to the stack.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number in the script where the opcode appears.
 */
void push(stack_t **stack, unsigned int line_number)
{
    stack_t *new;
    extern int value; /* Assumes 'value' holds the integer to push */

    new = malloc(sizeof(stack_t));
    if (!new)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    new->n = value;
    new->prev = NULL;
    new->next = *stack;
    if (*stack != NULL)
        (*stack)->prev = new;
    *stack = new;
}
