#include<stdio.h>

main() 
{
    int n;
    printf("Enter the array's row & column size: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter array's elements:\n");
    for (int i=0; i<n; i++) 
	{
        for (int j=0; j<n; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("The transpose matrix of an array:\n");
    for (int i=0; i<n; i++)
	{
        for (int j=0; j<n; j++) 
		{
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}
