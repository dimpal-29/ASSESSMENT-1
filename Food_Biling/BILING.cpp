//FOOD-BILING

#include<stdio.h>
main()
{
	int ch,qty,total,Pizaa = 180,Burger = 100,Dosa =120,Idli=50;
	char choice;
	int final_amount = 0;
	do
	{
	
			printf("-----------FOOD MENU---------\n");
			printf(" 1. Pizaa Price   =  180rs/pcs\n");
			printf(" 2. Burger Price  =  100rs/pcs\n");
			printf(" 3. Dosa price    =  120rs/pcs\n");
			printf(" 4. Idli price    =   50rs/pcs\n");
					printf("enter the food choice: ");
			scanf("%d",&ch);
			switch(ch)
			{
			
				case 1:
					printf(" you have selected Pizaa \n");
					printf("enter the quantity:");
					scanf("%d",&qty);
					total = qty * Pizaa;
					printf("total is = %d\n",total);
					break;
				case 2:
					printf("you have selected Burger \n");
					printf("enter the quantity:");
					scanf("%d",&qty);
					total = qty * Burger;
					printf("total is = %d\n",total);
					break;
				case 3:
					printf("you have selected Dosa \n");
					printf("enter the quantity:");
					scanf("%d",&qty);
					total =qty * Dosa;
					printf("total is = %d\n",total);
					break;
				case 4:
					printf("you have selected Idli \n");
					printf("enter the quantity:");
					scanf("%d",&qty);
					total = qty * Idli;
					printf("total is = %d\n",total);
					break;
				default:
					printf("please enter vaild choice between 1 to 4\n");
			}
			final_amount = final_amount + total;
			printf("Do you want to place more orders ? y and n \n");
			scanf(" %c",&choice);
	}
	while (choice == 'y' || choice == 'Y');
	printf("Total amount is : %d",final_amount);
	
}
