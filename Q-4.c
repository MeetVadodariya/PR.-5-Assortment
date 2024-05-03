#include<stdio.h>

main() {
    int r, c;
    
    printf("Enter the array's row size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c);
    
    int a[r][c];
    
    printf("Enter array's elements:\n");
    for(int i = 0; i < r; i++) 
	{
        for(int j = 0; j < c; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    int choice;
    printf("\nEnter row number: ");
    scanf("%d", &choice);
    
    printf("Elements of row %d: ", choice);
    int sumRow = 0;
    for(int j = 0; j < c; j++) 
	{
        printf("%d", a[choice][j]);
        if(j != c - 1)
            printf(", ");
        sumRow += a[choice][j];
    }
    printf("\nThe sum of row %d: %d\n", choice, sumRow);
    
    printf("\nEnter column number: ");
    scanf("%d", &choice);
    
    printf("Elements of column %d: ", choice);
    int sumCol = 0;
    for(int i = 0; i < r; i++) 
	{
        printf("%d", a[i][choice]);
        if(i != r - 1)
            printf(", ");
        sumCol += a[i][choice];
    }
    printf("\nThe sum of column %d: %d\n", choice, sumCol);

}
