#include<stdio.h>
#include<conio.h>

void main()

{

float basic,a=0.2,b=1.5,hra,da,salary;
clrscr();

printf("\n enter the basic of the employee:");
scanf("%f",&basic);
hra=a*basic;
da=b*basic;
salary=basic+hra+da;

printf("\n salary of the employee is :%.2f",salary);
getch();

}