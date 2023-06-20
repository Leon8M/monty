#include "monty.h"

/**
 * rotl_opcode - Rotate the stack to the top.
 * @stack: Double pointer to the stack.
 * @line_number: Current line number in the bytecode file.
 */
void rotl_opcode(stack_t **stack, unsigned int line_number)
{
stack_t *top, *last;

(void)line_number;

if (*stack != NULL && (*stack)->next != NULL)
{
top = *stack;
last = *stack;

while (last->next != NULL)
last = last->next;

*stack = top->next;
(*stack)->prev = NULL;

top->next = NULL;
top->prev = last;
last->next = top;
}
}
