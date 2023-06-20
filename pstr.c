#include "monty.h"

/**
 * pstr_opcode - Print the string starting at the top of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Current line number in the bytecode file.
 */
void pstr_opcode(stack_t **stack, unsigned int line_number)
{
stack_t *current;
(void)line_number;
current = *stack;

while (current != NULL && current->n != 0 && current->n >= 0 && current->n <= 127)
{
if (current->n == 32 || (current->n >= 65 && current->n <= 90) || (current->n >= 97 && current->n <= 122))
putchar(current->n);
else
break;

current = current->next;
}

putchar('\n');
}
