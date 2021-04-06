#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define true 1
#define false 0

int front = -1;
int rear = -1;
int queue[MAX];

int IsEmpty(void)
{
	if(front == rear)
		return true;
	else return false;
}
int IsFull(void)
{
	int tmp = (rear + 1)%MAX;
	if(tmp == front)
		return true;
	else
		return false;
}
void addq(int value)
{
	int i = 0;
	if(IsFull())
		printf("Queue is Full.\n");
	else
	{
		rear = (rear + 1)%MAX;
		queue[rear] = value;
		for(i = 0;i<rear + 1; i++)
			printf("%3d", queue[i]);
	}
	printf("\n");
}
int deleteq()
{
	if(IsEmpty())
		printf("Queue is Empty.\n");
	else
	{
		front = (front + 1)%MAX;
		return queue[front];
	}
}
int main()
{
	printf("Add Value #1\n");
	addq(4);
	printf("Add Value #2\n");
	addq(7);
	printf("Add Value #3\n");
	addq(12);
	printf("Delete Values\n");
	printf("%d\n", deleteq());
	printf("%d\n", deleteq());
	printf("%d\n", deleteq());
	deleteq();

	return 0;
}
