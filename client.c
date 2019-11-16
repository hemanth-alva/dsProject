#include "header.h"

int menu();

int main()
{	
	menu();
}

int menu()
{
	int option;
	//flight * pq=NULL;

	do{
		printf("%s\n","Choose an option 1-Insert flight record \n2-Display flight going to use runway\n3-Display all records\n4-delete record\n5-reset");
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
		}
	}while(option!=0);
	return 0;
}


