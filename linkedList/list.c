#include "list.h"

t_list *created_node(void *content)
{
	t_list *node = (t_list *)malloc(sizeof(t_list));
	
	if(!node)
	{
		printf("Memory allocation faild!");
		exit(1);
	}
	
	node->data = content;
	node->next = NULL;
	
	return (node);
}

void insert_begin(t_list **head,void *content)
{
	t_list *node = created_node(content);
	node->next = *head;
	*head = node;
	
}

void insert_end(t_list **head,void *content)
{
	t_list *node = created_node(content);
	if(*head == NULL)
	{
		*head = node;
		return;
	}
	t_list *tmp = *head;
	while(tmp->next != NULL)
	{
	 	tmp = tmp->next;
	}
	tmp->next = node;
}
void delete_list(t_list **head,void *key)
{
	t_list *tmp = *head;
	t_list *prev = NULL;
	
	if(tmp != NULL && tmp->data == key)
	{
		*head = tmp->next;
		free(tmp);
		return;
	}
	while(tmp != NULL && tmp->data != key)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	
	if(tmp == NULL) return;
	
	prev->next = tmp->next;
	
	free(tmp);
}

bool search_list(t_list **head,void *target)
{
	t_list *node = *head;
	
	while(node != NULL)
	{
		if(node->data == target)
			return true;
		node = node->next;
	}
	return false;
}

t_list *reverse_list(t_list **head)
{ 
	t_list *tmp = *head;
	t_list *prev = NULL;
	
	while(tmp != NULL)
	{
		t_list *next = tmp->next;
		tmp->next= prev;
		prev= tmp;
		tmp=next;
	}
	return (prev);
}

void print_list(t_list *head)
{
	t_list *tmp = head;
	printf("[");
	while(tmp != NULL)
	{
		printf(" %s ",(char *)tmp->data);
		tmp = tmp->next;
	}	
	printf("]");
}
