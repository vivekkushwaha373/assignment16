#include<stdio.h>
int main()
{   int s=0;
   int arr[3][3];
   int ptr[3][3];
   int add[3][3];
   printf("enter the values of 1 matrix\n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        printf("enter the %d row and %d column: ",i+1,j+1);
        scanf("%d",&arr[i][j]);
    }
  }
   printf("enter the values of 2 matrix\n");
   for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        printf("enter the %d row and %d column: ",i+1,j+1);
        scanf("%d",&ptr[i][j]);
    }
  }
  printf("here is your 1st matrix: \n");
    for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        printf("%d ",arr[i][j]);
       
    }
    printf("\n");
  }
  printf("here is your 2nd matrix: \n");
    for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        printf("%d ",ptr[i][j]);
       
    }
    printf("\n");
  }
  printf("the product is: \n");
   for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {   
        for(int k=0;k<3;k++)
        {s=s+arr[i][k]*ptr[k][j];}
        printf("%d ",s);
        s=0;
    }
    
    printf("\n");
  }
    return 0;
}