#ifndef LIST_H
#define LIST_H
#include<stdlib.h>
#include<stdio.h>
#include <stdbool.h>

typedef struct s_list{
	void *data;
	struct s_list *next;
} t_list;

t_list *created_node(void *content);
void print_list(t_list *head);
void insert_begin(t_list **head,void *content);
void insert_end(t_list **head,void *content);
void delete_list(t_list **head,void *key);
bool search_list(t_list **head,void *target);
t_list *reverse_list(t_list **head);

#endif
