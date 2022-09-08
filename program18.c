#include<stdio.h>

int addition(int);

int main()
{
int ino=0;
int ivalue=0;

printf("enter number\n");
scanf("%d\n",&ino);

ivalue=addition(ino);
printf("addition is:%d\n",ivalue);

return 0;
}

int addition(int num)
{
int iret=0;
int iset=0;

if(num<0)
{
num=-num;
}

for(iret=0;iret<=num;iret++)
{
iset=iset+iret;
}
return iset;
}

