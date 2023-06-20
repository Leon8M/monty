#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * push - Pushes an element to the stack.
 * @stack: Double pointer to the head of the stack.
 * @value: The value to be pushed.
 *
 * Return: void
 */
void push(stack_t **stack, int value)
{
stack_t *new_node;

new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}

new_node->n = value;
new_node->prev = NULL;

if (*stack != NULL)
{
new_node->next = *stack;
(*stack)->prev = new_node;
}

*stack = new_node;
}
