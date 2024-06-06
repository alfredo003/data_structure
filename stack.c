#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct
{
	int array[MAX];
	int top;
} Stack;

void push(int value,Stack *stack)
{
	if(stack->top < MAX)
	{
		stack->array[stack->top] = value;
		stack->top++;

	}else
	{
		printf("NO space");
	}
}
void pop(Stack *stack)
{
	if(stack->top > 0)
	{
		stack->top--;
	}
	else
	{
		printf("empty");
	}

}
int main()
{
	Stack p;
	p.top = 0;

	push(1,&p);
	push(2,&p);
	push(3,&p);
	push(5,&p);

printf("Top: %d\n",p.top);
	return (0);
}
