#include<stdio.h>
main()
{
	int row,col;
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=5;col++)
		{
			printf("*");
			if (row<col)
			{
				printf("$");
			}
		}
		printf("\n");
	}
}
