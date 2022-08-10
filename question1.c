#include<stdio.h>
int main()
{
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
  printf("the sum is: \n");
   for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        printf("%d ",arr[i][j]+ptr[i][j]);
    }
    printf("\n");
  }
    return 0;
}