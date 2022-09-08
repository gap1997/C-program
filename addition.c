#include<stdio.h>
int Addition(int ino1,int ino2)
{
int ians=0;
ians=ino1+ino2;
return ians;
}


int main()
{
int ivalue1=0,ivalue2=0,iret=0;
printf("Enter frist number\n");
scanf("%d",& ivalue1);
printf("Enter second number\n");
scanf("%d",& ivalue2);

iret=(ivalue1,ivalue2);
printf("Addition of two numbers is:%d\n",iret);

return 0;
}