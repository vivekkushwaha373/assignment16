#include<stdio.h>
int main()
{  
   int arr[3][3];
  int s=0;
   printf("enter the values of the matrix\n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        printf("enter the %d row and %d column: ",i+1,j+1);
        scanf("%d",&arr[i][j]);
    }
  }
   
  printf("here is your matrix: \n");
    for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        printf("%d ",arr[i][j]);
       
    }
    printf("\n");
  }
 
  printf("the sum of rows: \n");
    for(int i=0;i<3;i++)
  {s=0;
    for(int j=0;j<3;j++)
    {
      s=s+arr[i][j];
    }
    printf("The sum %d row is: %d\n",i+1,s);
  }
 printf("the sum of rows: \n");
    for(int j=0;j<3;j++)
  {s=0;
    for(int i=0;i<3;i++)
    {
      s=s+arr[i][j];
    }
    printf("The sum %d column is: %d\n",j+1,s);
  }
  
    return 0;
}