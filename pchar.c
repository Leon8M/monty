#include "monty.h"

/**
 * pchar_opcode - Print the character at the top of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Current line number in the bytecode file.
 */
void pchar_opcode(stack_t **stack, unsigned int line_number)
{
int value;

if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
exit(EXIT_FAILURE);
}

value = (*stack)->n;

if (value < 0 || value > 127)
{
fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
exit(EXIT_FAILURE);
}

putchar(value);
putchar('\n');
}
