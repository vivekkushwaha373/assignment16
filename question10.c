#include<stdio.h>
int main()
{  int i,j,count=0;int m,var;
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
  {count=0;
    for(int l=0;l<j;l++)
    {if(arr[k][l]==1)
        count++;
      printf("%d ",arr[k][l]);
    }
    if(k==0)
    {m=count;var=k;}
    else
    {
        if(m<count)
        var=k;
    }
   printf("\n");
  }
 
 
 printf("the maximum number of row having 1s is: %dth",var+1);
 
  
    return 0;
}