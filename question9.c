#include<stdio.h>
int main()
{  int i,j,count=0;
 printf("enter the number of rows: ");
 scanf("%d",&i);
 printf("enter the number of coulmns: ");
 scanf("%d",&j);
  int arr[i][j];
   printf("enter the values of the matrix\n");
  for( int k=0;k<i;k++)
  {
    for( int l=0;l<j;l++)
    {
        printf("enter the %d row and %d column: ",k+1,l+1);
        scanf("%d",&arr[k][l]);
    }
  }
   
  printf("here is your matrix: \n");
    for(int k=0;k<i;k++)
  {
    for(int l=0;l<j;l++)
    {if(arr[k][l]==0)
        count++;
        printf("%d ",arr[k][l]);
       
    }
    printf("\n");
  }
 
 
 if(count>(i*j)/2)
 printf("the given matrix is a sparse matrix");
 else
 printf("the given matrix not a sparse matrix");
 
  
    return 0;
}