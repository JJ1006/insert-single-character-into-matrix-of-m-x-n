#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,m,n,l,k,z
    ;
    printf("Please enter the number of rows you want : \n");
    scanf("%d",&m);
    printf("Please enter the number of columns you want : \n");
    scanf("%d",&n);
    char arr[m][n];

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Please enter the element row wise : \n");
            scanf("%s",&arr[i][j]);
        }
    }
printf("\n\n\n");
printf("\t");
for(z=0;z<=n-1;z++)
        {
            printf("+--+");
        }
        printf("\n");
    for(l=0;l<=m-1;l++)
    {
        printf("\t");
        printf("|");

        for(k=0;k<=n-1;k++)
        {
            printf(" %c |",arr[l][k]);
        }
        printf("\n");
        printf("\t");
        for(z=0;z<=n-1;z++)
        {
            printf("+--+");
        }
        printf("\n");
    }
    }

