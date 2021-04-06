#define MAX_QUEUE_SIZE 9

#define element int

type struct
{
	int front;
	int rear;
	element data[MAX_QUEUE_SIZE];
}QueueType;

void error(char <F3>message);
void init_queue(QueueType *q);
void queue_print(QueueType *q);
int is_full(QueueType *q);
int is_empty(QueueType *q);
void enqueue(QueueType *q, element item);
element dequeue(QueueType *q);
