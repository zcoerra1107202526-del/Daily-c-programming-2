#include<stdio.h>
void main()
{
  int a;
  clrscr();
printf("Enter value of a");
scanf("%d",&a);

if(a>=75)
{
printf("Grade A");
}
else if(a>=50)
{
printf("Grade B");
}
else
{
printf("Grade C");
}
  getch();
}
