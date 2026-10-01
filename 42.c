#include<stdio.h>
void main()
{
  int a;
clrscr();  
printf("Enter value of a");
  scanf("%d",&a);

if(a>1)
{
printf("a is positive");
  }
else if(a<1)
{
printf("a is negative");
}
else
  {
  printf("Number is zero");
    }
getch();
}
