#include<stdio.h>
#define MAX 10
typedef struct
{
   int array[MAX];
   int top;     
}Stack;

void push(int value,Stack *stack)
{
    if(stack->top < MAX)
    {
        stack->top++;
        stack->array[stack->top] = value;
    }
    else
    {
        printf("No space!");
    }
}
int main()
{
    char op;
    printf("a: adicione elemento ");
    printf("r: remove elemento ");
    printf("s: exibe elementos ");
    switch (op)
    {
    case 'a':
      printf("s: exibe elementos ");
    break;
    case 'r':
       
    break;
    case 's':
       
    break;
    default:
     printf("Opcao inexistente...!");
        break;
    }


    printf("\n");
    return (0);
}