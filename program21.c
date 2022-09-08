#include<stdio.h>
typedef unsigned long int UINT;

UINT factorial(int);
int main()
{
int ivalue=0;
UINT ino=0;

printf("enter number\n");
scanf("%d\n",&ivalue);

ino=factorial(ivalue);
printf("factorial number is :%d\n",ino);

return 0;
}

UINT factorial(int isum)
{

UINT idigit=1;
int inum=0;

if(isum<0)
{
isum=-isum;
}

for(inum=;inum<=isum;inum++);
{
idigit=idigit*inum;
}
return idigit;
}