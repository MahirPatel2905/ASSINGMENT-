/*Wap To Print Pattern
1
1 0
1 0 1 
1 0 1 0
1 0 1 0 1
*/
#include<stdio.h>
int main()
{
	int i,j,row;
	printf("\nEnter row count =");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2!=0)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
	return 0;
}
