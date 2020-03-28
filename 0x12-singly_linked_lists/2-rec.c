#include <stdlib.h>
#include <stdio.h>

typedef struct MyStruct
{
	int num;
	struct MyStruct *next;
} node;


/**
 * rec - function that adds a old node at the beginning of a list_t list
 * @head: pointer that point to the header node
 * @str: first node
 * Return: The adress of the old.
 */

node *rec(node *head, const int n)
{	
	node *old;
	
	
	if (n)
	{
		old = head;
		head = malloc(sizeof(node));
		if (head == NULL)
			return (NULL);
		head->num = n;
		rec(head->next, n - 1);
	}
	head->next = NULL;
	return (head);
}

int main(void)
{
	int i;
	node *head, *p;
	
	p = rec(head, 5);

	for (i = 0; p; i++)
	{
		printf("[%d]\n", p->num);
		p = p->next;
	}
	return (0);
}
