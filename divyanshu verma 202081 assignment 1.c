/*program to search an element from 2d arry */
#include <stdio.h>
int main()
{
    int m, n,search=0;
    printf("enter no of rows in arry\n");
    scanf("%d", &m);
    printf("enter no of column  in arry\n");
    scanf("%d", &n);
    int arr[m][n];
    printf("enter the elements one by one \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter the element of row %d colunm %d\n", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("enter the elemet you want to find\t");
    int element;
    scanf("%d", &element);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == element)
            {
                search=1;
                printf("element  found at row %d column %d\n", i + 1, j + 1);
                break;
            }
           
           
        }
    }
    if (search==0)
    printf("element not found in the arry");

    
    
    return 0;
}
