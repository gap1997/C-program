#include<stdio.h>

void display(int);

int main()
{
int ivalue=0;
printf("enter number\n");
scanf("%d\n",&ivalue);

display(ivalue);
return 0;
}

void display(int iret)
{
int q=0;

if(iret==0)
{
printf("you hava entered value is 0\n");
}
if(iret<0)
{
iret=-iret;
}
for(q=0;q<=iret;q++)
{
printf("%d\n",q);
}

}
