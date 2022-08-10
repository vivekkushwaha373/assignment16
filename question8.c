#include<stdio.h>
int main()
{  
   int arr[3][3];
  
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
 
  printf("the upper traingle of the given matrix is : \n");
    for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {  
     if((i+j)>1)
      printf("  "); 
    else
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
 
  
    return 0;
}