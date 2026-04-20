#include <stdio.h>

int main()
{
    int choice, i, j, n;
    int A[10][10], B[10][10], C[10][10];
    int min, saddle_found = 0;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of Matrix A:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&A[i][j]);

    printf("Enter elements of Matrix B:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&B[i][j]);

    printf("\nMenu:\n");
    printf("1. Addition\n");
    printf("2. Saddle Point\n");
    printf("3. Transpose (instead of inverse - simple version)\n");
    printf("4. Check Magic Square\n");

    printf("Enter choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                    C[i][j] = A[i][j] + B[i][j];

            printf("Resultant Matrix:\n");
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                    printf("%d ", C[i][j]);
                printf("\n");
            }
            break;

        case 2:
            for(i=0;i<n;i++)
            {
                min = A[i][0];
                int col = 0;

                for(j=1;j<n;j++)
                {
                    if(A[i][j] < min)
                    {
                        min = A[i][j];
                        col = j;
                    }
                }

                int isSaddle = 1;
                for(j=0;j<n;j++)
                {
                    if(A[j][col] > min)
                    {
                        isSaddle = 0;
                        break;
                    }
                }

                if(isSaddle)
                {
                    printf("Saddle Point = %d\n", min);
                    saddle_found = 1;
                }
            }

            if(!saddle_found)
                printf("No Saddle Point\n");

            break;

        case 3:
            printf("Transpose Matrix:\n");
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                    printf("%d ", A[j][i]);
                printf("\n");
            }
            break;

        case 4:
        {
            int sum = 0, flag = 1;

            for(j=0;j<n;j++)
                sum += A[0][j];

            for(i=1;i<n;i++)
            {
                int row_sum = 0;
                for(j=0;j<n;j++)
                    row_sum += A[i][j];

                if(row_sum != sum)
                    flag = 0;
            }

            for(j=0;j<n;j++)
            {
                int col_sum = 0;
                for(i=0;i<n;i++)
                    col_sum += A[i][j];

                if(col_sum != sum)
                    flag = 0;
            }

            if(flag)
                printf("Matrix is Magic Square\n");
            else
                printf("Matrix is NOT Magic Square\n");

            break;
        }

        default:
            printf("Invalid choice");
    }

    return 0;
}