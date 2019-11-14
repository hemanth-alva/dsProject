#include "header.h"


flight * init_node()
{
	flight * newFlight=(flight*)malloc(sizeof(flight));
	printf("Enter the info\n");
	printf("%s\t","Flight Number" ); scanf("%d",newFlight->flightNumber);
	printf("\n%s\t","1-Landing 2-Takeoff"); scanf("%d",&newFlight->task);
	if(&newFlight->task==1)
		printf("%s\n","Enter Source" );
	else
		printf("%s\n","Enter Destination" );
	scanf("%s",newFlight->sd);
	printf("%s\n","Enter Distance" );
	scanf("%d",newFlight->distance);
	printf("%s\n","Enter Priority" );
	scanf("%d",newFlight->priority);
	newFlight->link=NULL;
}

flight_list* insert(flight_list * list)
{	
	flight * newFlight=init_node();
	if(flight_list->head==NULL)
	{
		flight_list->head=flight;
		flight_list->tail=flight;
	}
	else()
	{
		flight_list->tail->link=newFlight;
		flight_list->tail=newFlight;
	}
}

flight* deletePriority()
{

}

flight* displayPriority()
{

}

flight* display()
{

}

flight* destroy()
{

}