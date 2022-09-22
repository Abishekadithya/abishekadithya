#include<stdio.h>
int main()
{
  int num,i,sum=0;
  printf("enter a positive number");
  scanf("%d",&num);
  i=0;
  do
  {
   sum=sum+i;
   i++;
  }
  while(i<=num);
  {
    printf("sum of %d of first natural numbers is%d",num,sum);
  }
  return 0;
}