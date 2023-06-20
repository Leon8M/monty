#include "monty.h"
#include <stdio.h>

/**
 * add - Adds the top two elements of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of the current opcode.
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
stack_t *temp;

if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
exit(EXIT_FAILURE);
}

(*stack)->next->n += (*stack)->n;
temp = *stack;
*stack = (*stack)->next;
(*stack)->prev = NULL;
free(temp);
}
