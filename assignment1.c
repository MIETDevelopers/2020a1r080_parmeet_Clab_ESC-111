#include<stdio.h>
#include<stdlib.h>
void input_mat(int *m, int row, int col){
    int i, j;
 for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        printf("Enter value at[%d][%d]", i, j);
        scanf("%d",(m +i*col+j));
    }
 }
}
void multiply(int *m1, int *m2, int *product, int row1, int col1, int row2, int col2){
    int i,j,k;
for (i = 0; i < row1; i++){
        for (j = 0; j < col2; j++){
            *(product + i*col2+j)= 0;
            for (k = 0; k < row2; k++){
                *(product + i*col2+j) += *(m1+i*row2+k) * *(m2+k*col2+j);
            }
        }
    }
}
void output_mat(int *m, int row, int col){
    int i,j;
 for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            printf("%d  ", *(m+i*col+j));
        }
        printf("\n");
    }
}
int main()
{
    int *a, *b, *c;
    int row1, col1, row2, col2;
    printf("Matrix Multiplication using Dynamic Memory Allocation \n");
    printf("Choose the number of rows and columns for matrix 1 : \n");
    scanf("%d %d", &row1, &col1);
    printf("Choose the number of rows and columns for matrix 2 : \n");
    scanf("%d %d", &row2, &col2);
   
    if(col1 != row2)
    {
        printf("Matrices cannot be multiplied!!");
    }else{
        a = (int *)malloc((row1*col1)*sizeof(int));
        b = (int *)malloc((row2*col2)*sizeof(int));
        c = (int *)malloc((row1*col2)*sizeof(int)); 
        printf("Enter elements : \n");
        printf("Matrix 1 \n");
        input_mat(a, row1, col1);
        printf("Matrix 2 \n");
        input_mat(b, row2, col2);
        multiply(a, b, c, row1, col1, row2, col2);
        printf("Product of Matrix \n");
        output_mat(c,row1, col2);
    }
    return 0;
}
