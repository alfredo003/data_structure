#include "list.h"

int main(int argc,char **argv)
{
	t_list *head = NULL;

	insert_end(&head,"Brasil 1");
	insert_end(&head,"Brasil 2");
	insert_end(&head,"Brasil 3");
	insert_end(&head,"Brasil 4");
	insert_end(&head,"Brasil 5");
	delete_list(&head,"Brasil 4");
	delete_list(&head,"Brasil 1");
	print_list(head);
	
	if(search_list(&head,"Brasil 0"))
		printf("\nFinded!");
	else
		printf("\nNo Finded!");
	return (0);
}
