#include<stdio.h>
void main()
{
float size,speed,time;
clrscr();
printf("Enter file size in MB:");
scanf("%f",&size);

printf("Enter transfer speed in MB/s:");
scanf("%f",&speed);

time=size/speed;

   printf("\nTransfer Time = %.2f seconds",time);
getch();
}
