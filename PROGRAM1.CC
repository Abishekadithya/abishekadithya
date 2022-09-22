#include<stdio.h>
int main()
{
  int n,i;
  printf("enter two numbers limit");
  scanf("%d",&n);
  printf("\n the even numbers are");
  for(i=2;i<n;i=i+2)
  printf("%d",i);
  return 0;
}