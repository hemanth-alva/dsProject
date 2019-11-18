#include "header.h"
flight *head = NULL;


flight * init_node()
{
	flight * newFlight=(flight*)malloc(sizeof(flight));
	printf("Enter the info\n");
	printf("Flight Number: " ); scanf("%s",newFlight->flightNumber);
	printf("1-Landing 2-Takeoff :"); scanf("%d",&newFlight->task);
	printf("Enter Source and destination :" );
	scanf("%s",newFlight->sd);
	printf("Enter Distance: " );
	scanf("%d",&newFlight->distance);
	printf("Enter Priority: " );
	scanf("%d",&newFlight->priority);
	newFlight->link=NULL;
	return newFlight;
}

flight* insert()
{	
	flight * newFlight=init_node();
	flight * q;
	if(head == NULL || newFlight->priority > head->priority)
	{
		newFlight->link = head;
		head = newFlight;
	}
	else
	{
		q = head;
		while(q->link != NULL && q->link->priority >= newFlight->priority )
			q = q->link;
		newFlight->link = q->link;
		q->link = newFlight;
	}	
	return head;
}

void deletePriority()
{
	flight *temp;
	if(head == NULL)
		printf("Queue Underflow\n");
	else
	{
		temp = head;
		printf("Deleted item is %s\n",temp->flightNumber);
		if(temp->task ==1 )
			printf("Landing\t");
		else
			printf("Takeoff\t");
		printf("%s\t,%d\n",temp->sd,temp->distance);
		head = head->link;
		free(temp);
	}
}

/*flight* displayPriority()
{
}*/

void display()
{
	flight *ptr;
	ptr = head;
	if(head == NULL)
		printf("Queue is empty\n");
	else 
	{
		while(ptr != NULL)
		{
		printf("Flight Number is: %s\n",ptr->flightNumber);
		if(ptr->task ==1 )
			printf("Landing\t");
		else
			printf("Takeoff\t");
		printf("%s\t,%d\n",ptr->sd,ptr->distance);
		ptr = ptr->link;
		}
	}

}

void destroy()
{
	flight *temp = head;
	while (temp != NULL)
	{
		head= head->link;
		free(temp);
		temp = head;		
	}
}
