#include "header.h"

int menu();

int main()
{	
	menu();
}

int menu()
{
	int option;
	//flight *head =NULL;

	do{
		printf("%s\n","Choose an option: \n1-Insert flight record \n2-Display all records\n3-delete record\n4-reset");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				insert();
				break;

			/*case 2:
				pq=displayPriority(pq);
				break;*/

			case 2:
				display();
				break;

			case 3:
				deletePriority();
				break;

			case 4:
				destroy();
				break;
			default: exit(0);
		}
	}while(option!=0);
	return 0;
}
