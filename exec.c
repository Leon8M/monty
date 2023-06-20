#include "monty.h"
#include <string.h>

/**
 * get_opcode - Parses the opcode from a line of Monty bytecode.
 * @line: Line of Monty bytecode.
 *
 * Return: The parsed opcode.
 */
char *get_opcode(char *line)
{
char *opcode = NULL;

opcode = strtok(line, " \t\n");
if (opcode == NULL || opcode[0] == '#') /* Ignore comment lines */
return (NULL);

return (opcode);
}
