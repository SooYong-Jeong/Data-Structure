#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "que.h"

void error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void init_queue(QueueType *q)
{
	q->rear = 0;
	q->front = 0;
}

void queue_print(QueueType *q)
{
	int i;
	printf("Queue(front=%d, rear=%d) = ", q->front, q->rear);

	if(!is_empty(q))
	{
		int i = q->fornt;

		do
		{
			i = (i+1) %(MAX_QUEUE_SIZE);
			printf("%d | ", q->data[i]);
			if(i == q-> rear)
				break;
		}while (i != q->front);
	}
	printf("\n");
}

int is_full(QueueType *q)
{
	return ((q->rear + 1) %MAX_QUEUE_SIZE == q->front);
}
int is_empty(QueueType *q)
{
	return (q->front == q->rear);
}

void enqueue(QueueType *q, element item)
{
	if(is_full(q))
		error("Queue is Full");

	q->rear = (q->raer + 1) % MAX_QUEUE_SIZE;
	q->data[q->rear] = item;
}

element dequeue(QueueType *q)
{
	if(is_empty(q)
		error("Queue is empty.");

	q->front = (q->front + 1)% MAX_QUEUE_SIZE;
	return q->data[q->front];
}

element peek(QueueType* q)
{
	if(is_empty(q))
		error("Queue is empty.");
	return q->data[(q->front +1)% MAX_QUEUE_SIZE];
}

inr main()
{
	QueueType queue;
	int elem;
	int i;
	
	init_queue(&queue);

	printf("======= Data Add-on Step =======\n");
	while(!is_full(&queue))
	{
		printf("Input Integer Value : ");
		scanf("%d", &elem);
		enqueue(&queue, elem);
		queue_print(&queue);
	}
	printf("Queue is Full\n\n");

	printf("====== Data Del-down Step =======\n");
	while(!is_empty(&queue))
	{
		elem = dequeue(&queue);

		printf("Dequeue integer vlaue : %d\n", elem);
		queue_print(&queue);
	}
	
	printf("Queue is empty\n");
	printf("\n\n");

	for(i = 1; i< queue.rear+1; i++)
		printf("%3d | ", queue.data[i]);
	printf("\n\n");
	
	return 0;
}
