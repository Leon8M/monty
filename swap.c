#include "monty.h"
#include <stdio.h>

/**
 * swap - Swaps the top two elements of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of the current opcode.
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
stack_t *temp;

if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
exit(EXIT_FAILURE);
}

temp = (*stack)->next;
(*stack)->prev = temp;
(*stack)->next = temp->next;
if (temp->next != NULL)
temp->next->prev = *stack;
temp->prev = NULL;
temp->next = *stack;
*stack = temp;
}
