#include "header.h"

void menu();

void main()
{	
	menu();
}

void menu()
{
	int option;
	flight * pq=NULL;

	do{
		printf("%s\n","Choose an option 1-Insert flight record \n2-Display flight going to use runway\n3-Display all records\n4-delete record\n5-reset");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				pq=insert(pq);
				break;

			case 2:
				pq=displayPriority(pq);
				break;

			case 3:
				pq=display(pq);
				break;

			case 4:
				pq=deletePriority(pq);
				break;

			case 5:
				pq=destroy(pq);
				break;
		}
	}while(option!=0);
}


