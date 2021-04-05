#include<stdio.h>
int main()
{
    int c, d, p, q, m, n, k, sum = 0;
    int fst[10][10], sec[10][10], mul[10][10];

    printf("Insert the num of rows and columns for fst matrix\n");
    scanf("%d%d", &m, &n);

    printf("Insert your fst matrix elements : \n");
    for(c=0;c<m;c++)
    for(d=0;d<n;d++)
    scanf("%d", &fst[c][d]);

    printf("Insert the num of rows and columns for sec matrix\n");
    scanf("%d%d", &p, &q);
     
     if(n!=p)
     printf("Your given matrices cannot be multiplied with eachother.\n");
    else
    printf("Insert your sec matrix elements : \n");
    for(c=0;c<p;c++)
    for(d=0;d<q;d++)
    scanf("%d", &sec[c][d]);

    for(c=0;c<m;c++)
    {
        for(d=0;d<q;d++)
        {
            for(k=0;k<p;k++)
            {
                sum = sum + fst[c][k] * sec[k][d];
            }
            mul[c][d] = sum;
            sum = 0;
        }
    }
    printf("Product of matrices\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<q;d++)
        printf("%d \t", mul[c][d]);
        printf("\n");
    }
 return 0;
}