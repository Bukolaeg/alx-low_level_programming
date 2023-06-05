#include "lists.h"
#include <stdio.h>

/**
  * print_listint_safe - define function
  * @head:
  * Return: what does it return?
  */
size_t print_listint_safe(const listint_t *head)
{
size_t i = 0;
size_t n;
const listint_t *tmp = NULL;
const listint_t *node = NULL;

printf("[%p] %d\n", (void *)tmp, tmp->n);
i++;
tmp = tmp->next;
node = head;
n = 0;

while (n < i)
{
if (tmp == node)
{
printf("-> [%p] %d\n", (void *)tmp, tmp->n);
return (i);
}
node = node->next;
n++;
}
if (!head)
tmp = head;

while (tmp)
head++;
return (0);
}
