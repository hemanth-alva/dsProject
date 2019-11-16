#include<stdio.h>
#include<stdlib.h>

typedef struct flight
{
	char flightNumber[10];
	int task;
	char sd[100];
	int distance;
	int priority;
	struct flight * link;
}flight;

//flight *head = NULL;


flight * insert();
void display();
//flight * displayPriority(flight*);
void deletePriority();
void destroy();


/*typedef struct flights_list
{
	flight * head;
	flight * tail;
};*/
