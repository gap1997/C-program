#include<stdio.h>

int factorial(int );


int main()
{
int ino=0;
int ivalue=0;


printf("enter number\n");
 scanf("%d\n",&ino);


ivalue=factorial(ino);
printf("factorial number is %d\n",ivalue);

return 0;
}


int factorial(int ino)
{
int isum=1;
int iret=0;

if(ino<0)
{
ino=-ino;
}

if(ino==0)
{
printf("you have entered value is 0\n");
}
for(iret=1;iret<=ino;iret++)
{
isum=isum*iret;
}
return isum;
}

