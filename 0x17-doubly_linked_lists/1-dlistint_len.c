#include "lists.h"

/**
* dlistint_len - Returns n of elements in the list
* @h: a pointer to the list
* Return: n elements in the list
*/
size_t dlistint_len(const dlistint_t *h)
{

unsigned int count = 0;

if (h == NULL)
{
return (NULL);
}

while (h)
{
h = h->next;
count++;
}

return (count);

}
