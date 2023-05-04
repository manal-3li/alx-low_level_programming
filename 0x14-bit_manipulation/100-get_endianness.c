#include "main.h"

/**
 * get_endianness- checks the endianness if the machine
 * is either little or big
 * Return: 0 if big endian, or 1 for little endian
 */

int get_endianness(void)
{

unsigned int i = 1;
char *c = (char *) &i;

return (*c);

}
