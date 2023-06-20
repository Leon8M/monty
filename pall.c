#include <stdlib.h>
#include "monty.h"
#include <stdio.h>

/**
 * pall - Prints all values on the stack.
 * @stack: Double pointer to the head of the stack.
 *
 * Return: void
 */
void pall(stack_t **stack)
{
stack_t *current = *stack;

while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
}
}
