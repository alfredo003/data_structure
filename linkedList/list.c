#include "list.h"

t_list *insertion(void *data)
{
	t_list *node = (t_list *)malloc(sizeof(t_list));
	
	if(!node)
		return NULL;
	node->data = data;
	node->next =NULL;
	return (node);
}

void display(t_list *head)
{
	t_list *tmp =head;
	while(tmp)
	{
		printf(" %s ",(char *)tmp->data);
		tmp = head->next;
	}
}


int main(void)
{
	t_list *data = insertion("fff"); 
	
	display(data);
	return (0);
}
