#include "monty.h"

/**
 * rotr_opcode - Rotate the stack to the bottom.
 * @stack: Double pointer to the stack.
 * @line_number: Current line number in the bytecode file.
 */
void rotr_opcode(stack_t **stack, unsigned int line_number)
{
stack_t *last, *second_last;

(void)line_number;

if (*stack != NULL && (*stack)->next != NULL)
{
last = *stack;
second_last = *stack;

while (last->next != NULL)
{
second_last = last;
last = last->next;
}

second_last->next = NULL;
last->prev = NULL;
last->next = *stack;
(*stack)->prev = last;
*stack = last;
}
}
