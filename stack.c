#include <stdio.h>

#define SIZE 10

void push(int);
void pop();
void display();
void peek();

int stack[SIZE], top = -1;

int main()
{
	int val, choice;
	printf("\n-------MENU-------\n");
	while(1)
	{
		printf("\n1.Push, 2.Pop, 3.Display, 4.Peek, 5.Exit\n");
		printf("Command : ");
		scanf("%d", &choice);
		
		switch(choice)
		{
		case 1:
			printf("value : ");
			scanf("%d", &val);
			push(val);
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			peek();
			break;
		case 5:
			return 0;
		default:
			printf("Wrong Option.\n");
		}
	}
	return 0;
}

void push(int val)
{
	if (top == SIZE - 1)
		printf("Stack is Full.\n");
	else
	{
		top++;
		stack[top] = val;
	}
}

void pop()
{
	if (top == -1)
		printf("Stack is Empty.\n");
	else
	{
		printf("%d", stack[top]);
		--top;
	}
}

void display()
{
	if (top == -1)
		printf("Stack is Empty.\n");
	else
	{
		int i;
		for (i = top; i >= 0; i--)
			printf("%4d", stack[i]);
	}
}

void peek()
{
	if (top == -1)
		printf("Stack is Empty.\n");
	else
	{
		printf("%4d", stack[top]);
	}
}
