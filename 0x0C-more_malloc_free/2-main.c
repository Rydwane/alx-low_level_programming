<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i;

i = 0;
while (i < size)
{
if (i % 10)
{
printf(" ");
}
if (!(i % 10) && i)
{
printf("\n");
}
printf("0x%02x", buffer[i]);
i++;
}
printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *a;

a = _calloc(98, sizeof(char));
strcpy(a, "Best");
strcpy(a + 4, " School! :)\n");
Na[97] = '!';
simple_print_buffer(a, 98);
free(a);
return (0);
}
=======
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i;

i = 0;
while (i < size)
{
if (i % 10)
{
printf(" ");
}
if (!(i % 10) && i)
{
printf("\n");
}
printf("0x%02x", buffer[i]);
i++;
}
printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *a;

a = _calloc(98, sizeof(char));
strcpy(a, "Best");
strcpy(a + 4, " School! :)\n");
a[97] = '!';
simple_print_buffer(a, 98);
free(a);
return (0);
}
>>>>>>> 2616dc8fe4a65a9e28b32be62e1a814ca8647afc
=======
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i;

i = 0;
while (i < size)
{
if (i % 10)
{
printf(" ");
}
if (!(i % 10) && i)
{
printf("\n");
}
printf("0x%02x", buffer[i]);
i++;
}
printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *a;

a = _calloc(98, sizeof(char));
strcpy(a, "Best");
strcpy(a + 4, " School! :)\n");
a[97] = '!';
simple_print_buffer(a, 98);
    free(a);
    return (0);
}
>>>>>>> 51bf081297f8ebba34517a98dc325902914dcfb6
=======
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i;

i = 0;
while (i < size)
{
if (i % 10)
{
printf(" ");
}
if (!(i % 10) && i)
{
printf("\n");
}
printf("0x%02x", buffer[i]);
i++;
}
printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *a;

a = _calloc(98, sizeof(char));
strcpy(a, "Best");
strcpy(a + 4, " School! :)\n");
a[97] = '!';
simple_print_buffer(a, 98);
free(a);
return (0);
}
>>>>>>> 35407efeedff2d4e20303e141f13597dbb89ce94
