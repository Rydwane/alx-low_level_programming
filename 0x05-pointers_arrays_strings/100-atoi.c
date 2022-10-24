/**
 * _atoi - converts a string to an integer
 *
 * @s: string input parameter
 *
 * Return: converted integer from string
*/

int _atoi(char *s)
{
int i, val, sign;

<<<<<<< HEAD
do {
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0');
else if (num > 0)
break;
}
while (*s++);
=======
val = 0;
sign = 1;
>>>>>>> e4235ee74b9a72af3792f35f082216f8928c6545

for (i = 0; s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'); i++)
{
if (s[i] == '-')
sign = sign * -1;
}

for (i = 0; s[i] != 0; i++)
{
if (s[i] >= '0' && s[i] <= '9')
val = val * 10 + sign * (s[i] - '0');
if (val != 0 && !(s[i] >= '0' && s[i] <= '9'))
return (val);
}
return (val);
}
