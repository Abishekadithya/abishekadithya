#include<stdio.h>
#include<conio.h>
int main()
{
  int marks;
  printf("enter the marks between 0-100");
  scanf("%d",&marks);
  if(marks>=75)
  {
   printf("\n first class");
  }
  else if(marks>=60)
  {
   printf("\n second class");
  }
  else if(marks>=50)
  {
   printf("\n third class");
  }
  else
  {
    printf("reappear");
  }
  return 0;
}