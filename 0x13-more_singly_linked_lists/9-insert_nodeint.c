<<<<<<< HEAD
lijsamuael
/
alx-low_level_programming
Public
Code
Issues
Pull requests
1
Actions
Projects
Security
Insights
alx-low_level_programming/0x13-more_singly_linked_lists/9-insert_nodeint.c
@lijsamuael
lijsamuael adding a file that insets a new node at the given position
 1 contributor
48 lines (45 sloc)  847 Bytes
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a nod at the given position
 * @head: head.
 * @idx: index of the list.
 * @n: integer.
 * Return: nodes
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *node, *node_temporal;

if (!head && !*head)
return (NULL);
node_temporal = *head;
if (idx == i)
{
node = malloc(sizeof(listint_t));
if (!node)
return (NULL);
node->n = n;
node->next = *head;
*head = node;
return (node);
}
else
{
while (node_temporal)
{
if (idx == i + 1)
{
node = malloc(sizeof(listint_t));
if (!node)
return (NULL);
node->n = n;
node->next = node_temporal->next;
node_temporal->next = node;
return (node);
}
node_temporal = node_temporal->next;
i++;
}
}
return (NULL);
}
=======
#incluse <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a nod at the given position
 * @head: head.
 * @idx: index of the list.
 * @n: integer.
 * Return: nodes
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *node, *node_temporal;

if (!head && !*head)
return (NULL);
node_temporal = *head;
if (idx == i)
{
node = malloc(sizeof(listint_t));
if (!node)
return (NULL);
node->n = n;
node->next = *head;
*head = node;
return (node);
}
else
{
while (node_temporal)
{
if (idx == i + 1)
{
node = malloc(sizeof(listint_t));
if (!node)
return (NULL);
node->n = n;
node->next = node_temporal->next;
node_temporal->next = node;
return (node);
}
node_temporal = node_temporal->next;
i++;
}
}
return (NULL);
}
>>>>>>> da910120eb29f410be24db18eeaf7346cc701a60
