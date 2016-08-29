//Jackson Chandler
//jccyb4
//Homework 1
//19 Feb 2014
//


#include<stdio.h>
#include<math.h>


int main()
{
	int file, income;//file status and yearly salarly
	float paidtaxes, netincome;//percent of taxes paid and net

	while (1)
	{
	//Determin filing
		printf("Filing Status\n(1) Single\n(2) Married\n(3) Head of Household\n(0) Quit Program\n");
		scanf("%d", &file);
//Single
	switch(file)
	{
	case 1:
		//Enter income
		printf("Enter the annual income: ");
			scanf("%d", &income);
			//check to make sure it is positive
			while(income<=0)
				{
					printf("Invalid. enter again: ");
						scanf("%d", &income);
				}
			//10%
			if(income<=20000)
			{
				printf("Your Tax Rate is 10%%\n");
				paidtaxes=(income*.10);
				netincome=income-paidtaxes;
				printf("You pay $%.2f in taxes.\nAfter yoour taxes your net income is: $%.2f\n", paidtaxes, netincome);
			}
			//20%
			if(income>20000&&income<=50000)
			{
				printf("Your tax rate is 20%%\n");
				paidtaxes=(income*.20);
				netincome=income-paidtaxes;
				printf("You pay $%.2f in taxes.\nAfter your taxes your net income is : $%.2f\n", paidtaxes, netincome);
			}
			//30%
			if(income>50000&&income<=100000)
                        {
                                printf("Your tax rate is 30%%\n");
                                paidtaxes=(income*.30);
                                netincome=income-paidtaxes;
                                printf("You pay $%.2f in taxes.\nAfter your taxes your net income is : $%.2f\n", paidtaxes, netincome);
                        }
			//35%
 			if(income>100000&&income<=250000)
                        {
                                printf("Your tax rate is 35%\n");
                                paidtaxes=(income*.35);
                                netincome=income-paidtaxes;
                                printf("You pay $%.2f in taxes.\nAfter your taxes your net income is : $%.2f\n", paidtaxes, netincome);
                        }
			//40%
			 if(income>250000)
                        {
                                printf("Your tax rate is 40%%\n");
                                paidtaxes=(income*.40);
                                netincome=income-paidtaxes;
                                printf("You pay $%.2f in taxes.\nAfter your taxes your net income is : $%.2f\n", paidtaxes, netincome);
                        }

		break;

//married........ that poor guy
 	case 2:
		//eenter income
                printf("Enter the annual income: ");
                        scanf("%d", &income);
			//positive check
                        while(income<=0)
                                {
                                        printf("Invalid. enter again: ");
                                                scanf("%d", &income);
                                }
			//10%
                        if(income<=30000)
                        {
                                printf("Your Tax Rate is 10%%\n");
                                paidtaxes=(income*.10);
                                netincome=income-paidtaxes;
                                printf("You pay $%.2f in taxes.\nAfter yoour taxes your net income is: $%.2f\n", paidtaxes, netincome);
                        }
			//20%
                        if(income>30000&&income<=60000)
                        {
                                printf("Your tax rate is 20%%\n");
                                paidtaxes=(income*.20);
                                netincome=income-paidtaxes;
                                printf("You pay $%.2f in taxes.\nAfter your taxes your net income is : $%.2f\n", paidtaxes, netincome);
                        }
			//30%
                        if(income>60000&&income<=125000)
                        {
                                printf("Your tax rate is 30%%\n");
                                paidtaxes=(income*.30);
                                netincome=income-paidtaxes;
                                printf("You pay $%.2f in taxes.\nAfter your taxes your net income is : $%.2f\n", paidtaxes, netincome);
                        }
			//35%
                        if(income>125000&&income<=300000)
                        {
                                printf("Your tax rate is 35%%\n");
                                paidtaxes=(income*.35);
                                netincome=income-paidtaxes;
                                printf("You pay $%.2f in taxes.\nAfter your taxes your net income is : $%.2f\n", paidtaxes, netincome);
                        }
			//40%
                         if(income>300000)
                        {
                                printf("Your tax rate is 40%%\n");
                                paidtaxes=(income*.40);
                                netincome=income-paidtaxes;
                                printf("You pay $%.2f in taxes.\nAfter your taxes your net income is : $%.2f\n", paidtaxes, netincome);
                        }

 		break;
//Head of house hold
 	case 3:
		//Input income
                printf("Enter the annual income: ");
                        scanf("%d", &income);
			//Check income is +
                        while(income<=0)
                                {
                                        printf("Invalid. enter again: ");
                                                scanf("%d", &income);
                                }
			//10% range
                        if(income<=50000)
                        {
				//Display rate
                                printf("Your Tax Rate is 10%%\n");
				//tax math
                                paidtaxes=(income*.10);
                                netincome=income-paidtaxes;
				//display results
                                printf("You pay $%.2f in taxes.\nAfter yoour taxes your net income is: $%.2f\n", paidtaxes, netincome);
                        }
			//20% Range
                        if(income>50000&&income<=100000)
                        {
                                printf("Your tax rate is 20%%\n");
                                paidtaxes=(income*.20);
                                netincome=income-paidtaxes;
                                printf("You pay $%.2f in taxes.\nAfter your taxes your net income is : $%.2f\n", paidtaxes, netincome);
                        }
			//30% range
                        if(income>100000&&income<=250000)
                        {
                                printf("Your tax rate is 30%%\n");
                                paidtaxes=(income*.30);
                                netincome=income-paidtaxes;
                                printf("You pay $%.2f in taxes.\nAfter your taxes your net income is : $%.2f\n", paidtaxes, netincome);
                        }
			//35% range
                        if(income>250000&&income<=500000)
                        {
                                printf("Your tax rate is 35%%\n");
                                paidtaxes=(income*.35);
                                netincome=income-paidtaxes;
                                printf("You pay $%.2f in taxes.\nAfter your taxes your net income is : $%.2f\n", paidtaxes, netincome);
                        }
			//40% range
                         if(income>500000)
                        {
                                printf("Your tax rate is 40%%\n");
                                paidtaxes=(income*.40);
                                netincome=income-paidtaxes;
                                printf("You pay $%.2f in taxes.\nAfter your taxes your net income is : $%.2f\n", paidtaxes, netincome);
                        }
		
        	break;

//Exit calculator
	case 0:
		printf("Exiting the tax calculator\n");
		return 0;

	default:
		printf("Invalid choice enter another choice: ");
		break;
	}
}
//*%&$*%*$&%*$&%*$&%*$&%*$&%*$&%* DO YOU EVEN READ THESE COMMENTS? IF SO MAKE THE LAB CODE NEXT WEEK EASTER EGG (^(%^*(^%(*^(*^(%*^(%*^(%*^(%^*(^%*(^*%(^*(^*(%^*(%^*%(^*(*^%
}
