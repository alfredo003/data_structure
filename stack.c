#include <stdio.h>

int stack[10];
int top = 0;

void insert(int x)
{
	stack[top] = x;
	top++;
}
int delete()
{
	top--;
	stack[top];
}


int main()
{
	int n , m;


	insert(9);
	insert(3);
	insert(2);
	n = delete();
	m = delete();

	printf("n=%d\n",n);
	printf("m=%d\n",m);
	return (0);
}
