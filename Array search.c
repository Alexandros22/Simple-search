#include <stdio.h>
#include <stdlib.h>





void Find(int **a, int r, int c, int n, int column, int row);   // search function //


void main()
{
	char ans;
	int i, j, **pin_arithmwn, numb, rows, columns;
	
	do
	{
		do
		{
			printf("Give the number of the rows:");  
			fflush(stdin);
			scanf("%d", &rows);
			if (rows<1)
				printf("Wrong row!!\n");
		}while (rows<1);   // check for negative rows //
		
		do
		{
			printf("Give the number of the columns:");  
			fflush(stdin);
			scanf("%d", &columns);
			if (columns<1)
				printf("Wrong column!!\n");
		}while (columns<1);  // check for negative columns //

		pin_arithmwn = (int **) malloc (rows * sizeof(int));  // create rows in memory //

		for (i=0;i<rows;i++)
			pin_arithmwn[i] = (int *) malloc (columns * sizeof(int));  // create columns in memory //
	
		for (i=0;i<rows;i++)
		{
			for(j=0;j<columns;j++)
			{
				printf("Give the %d %d number:", i, j);
				fflush(stdin);
				scanf("%d", &pin_arithmwn[i][j]);   // put numbers in array //
			}
		}

		printf("Give the number that you want:");
		fflush(stdin);
		scanf("%d", &numb);  // put the number which we want to search //
	
		Find(pin_arithmwn, i=0, j=0, numb, columns, rows); // search function //

		printf("\nPress any key to repeat or 'e' for exit: "); 
		fflush(stdin);
		scanf("%c", &ans);

	}while (ans!='e');  // repeat the program //
}





void Find(int **a, int r, int c, int n, int column, int row)
{

	if (a[r][c]==n) // if the number was found then shows where is it //
	{
		printf("\nThe row is %d and the column is %d!\n", r+1, c+1);  // r+1 and c+1 because we count from 1 not from 0 //
		return;
	}
	else
	{
		if (r==row-1 && c==column-1)  // if the search arrives in the last element of the array then shows the proper message //
		{
			printf("\nThis number does not excist!!\n");
			return;	
		}
		else if (c==column-1)   // if the search arrives in the last element of the row then goes to the first of the next //
		{
			c=-1;
			r+=1;
		}
		Find(a, r, c+1, n, column, row);  // recursion //
	}
}


	










	