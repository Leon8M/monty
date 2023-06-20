#include "monty.h"

/**
 * stack_opcode - Set the format of the data to a stack (LIFO).
 * @stack: Double pointer to the stack.
 * @line_number: Current line number in the bytecode file.
 */
void stack_opcode(stack_t **stack, unsigned int line_number)
{
(void)stack;
(void)line_number;
}

/**
 * queue_opcode - Set the format of the data to a queue (FIFO).
 * @stack: Double pointer to the stack.
 * @line_number: Current line number in the bytecode file.
 */
void queue_opcode(stack_t **stack, unsigned int line_number)
{
stack_t *tmp, *last;

(void)line_number;

if (*stack != NULL && (*stack)->next != NULL)
{
tmp = *stack;
last = *stack;

while (last->next != NULL)
last = last->next;

*stack = tmp->next;
(*stack)->prev = NULL;
tmp->next = NULL;
last->next = tmp;
tmp->prev = last;
}
}
