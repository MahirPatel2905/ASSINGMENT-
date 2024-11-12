/*19. Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :
Unit Charge/unit
upto 350 @1.20
350 and above but less than 600 @1.50
600 and above but less than 800 @1.80
800 and above @2.00
If bill exceeds Rs. 800 then a surcharge of 18% will be charged and
the minimum bill should be of Rs. 256/-*/
#include <stdio.h>
int main()
{	 
	int name,unit,amount,tax,id,Totalamount;
	
	
 	printf("Enter your ID = ");
	scanf("%d",&id);
	
	printf("Enter your Name = ");
	scanf("%d",&name);
 	
	printf("Enter the Units = ");
	scanf("%d",&unit);
	
	
	if(unit < 350)
	{
		amount = unit*1.20;
		
		if(amount>800)
		{
			tax= amount*0.18;
			Totalamount = amount+tax;
			printf("\nCustomer ID = %d",id);
			printf("\nCustomer Name = %d",name);
			printf("\nTotal amount including Tax = %d",Totalamount);
		}
		else if( amount>=0 && amount<800)
		{
			tax = 256 ;
			Totalamount = amount+tax;
			printf("\nCustomer ID = %d",id);
			printf("\nCustomer Name = %d",name);
			printf("\nTotal amount including Tax = %d",Totalamount);
	
		}
		else
		{
			printf("Error");
		}
	}
	else if ( unit >= 350 && unit <600)
	{
		amount = unit*1.50;
		
		if(amount>800)
		{
			tax= amount*0.18;
			Totalamount = amount+tax;
			printf("\nCustomer ID = %d",id);
			printf("\nCustomer Name = %d",name);
			printf("\nTotal amount including Tax = %d",Totalamount);
		}
		else if( amount>=0 && amount<800)
		{
			tax = 256 ;
			Totalamount = amount+tax;
			printf("\nCustomer ID = %d",id);
			printf("\nCustomer Name = %d",name);
			printf("\nTotal amount including Tax = %d",Totalamount);
	
		}
		else
		{
			printf("Error");
		}
	}
	else if ( unit >=600 && unit <800)
	{
		amount = unit*1.80;
		
		if(amount>800)
		{
			tax= amount*0.18;
			Totalamount = amount+tax;
			printf("\nCustomer ID = %d",id);
			printf("\nCustomer Name = %d",name);
			printf("\nTotal amount including Tax = %d",Totalamount);
		}
		else if( amount>=0 && amount<800)
		{
			tax = 256 ;
			Totalamount = amount+tax;
			printf("\nCustomer ID = %d",id);
			printf("\nCustomer Name = %d",name);
			printf("\nTotal amount including Tax = %d",Totalamount);
	
		}
		else
		{
			printf("Error");
		}
	}
	else 
	{
		amount = unit*2.00;
		
		if(amount>800)
		{
			tax= amount*0.18;
			Totalamount = amount+tax;
			printf("\nCustomer ID = %d",id);
			printf("\nCustomer Name = %d",name);
			printf("\nTotal amount including Tax = %d",Totalamount);
		}
		else if( amount>=0 && amount<800)
		{
			tax = 256 ;
			Totalamount = amount+tax;
			printf("\nCustomer ID = %d",id);
			printf("\nCustomer Name = %d",name);
			printf("\nTotal amount including Tax = %d",Totalamount);
	
		}
		else
		{
			printf("Error");
		}
	}
	
	return 0;
}
