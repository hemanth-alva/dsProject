#include<stdio.h>
#include<stdlib.h>

flight * insert(flight*);
flight * display(flight*);
flight * displayPriority(flight*);
flight * deletePriority(flight*);
flight * destroy(flight*);

typedef struct flight
{
	char flightNumber[10];
	int task;
	char sd[100];
	int distance;
	int priority;
	struct flight * link;
}flight;

typedef struct flights_list
{
	flight * head;
	flight * tail;
};
