#include<stdio.h>

void main() 
{
  int i,j,s;

  for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
      if(j%2==0)
      {
        printf("%d",j);
      }
      else{
        printf("%d",j-1);
      }
    }
    printf("\n");
  }
}