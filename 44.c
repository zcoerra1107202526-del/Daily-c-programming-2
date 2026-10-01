#include<stdio.h>
void main()
{
  int a;
  clrscr();
printf("Enter value of a");
  scanf("%d",&a);

if(a%2==0)
{
printf("Number is positive");
}
else if(a%2!=0)
{
printf("Number is odd");
}
else
{
printf("Number is invalid");
}
  getch();
}
