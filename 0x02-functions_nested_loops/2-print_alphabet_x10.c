<<<<<<< HEAD
#include "main.h"


/**
 * print_alphabet - prints lower case alphabet
 *
 **/

void print_alphabet(void)
{

char i;

for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
=======
#include "main.h"


/**
 * print_alphabet_x10 - prints lowercase letters 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int timer;

char alpha;

for (timer = 0; timer < 10; timer++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
}
>>>>>>> 012d23b1791936684cf0728c960d7a76c2d2f1d5
