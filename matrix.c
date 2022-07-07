//program for transpose of matrix
#include<stdio.h>
int main()
{
	int a[4][5],t[5][4],r,c,i,j;
	printf("enter r and c:\n");
	scanf("%d%d",&r,&c);
	printf("enter the elements of array:\n");
        for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
      for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("%d\t",a[i][j]);
                }
		printf("\n");
        }

	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			t[i][j]=a[j][i];
		}
	}
	printf("\nAfter transpose the matrix is:\n"); 
	for(i=0;i<c;i++)
        {
                for(j=0;j<r;j++)
                {
                        printf("%d\t",t[i][j]);
                }
		printf("\n");
        }

}
