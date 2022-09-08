#include<stdio.h>

unsigned long int factorial(int);

int main()
{
   int ivalue=0;
   unsigned long int ino=0;

printf("enter number\n");
scanf("%d\n",&ivalue);


ino=factorial(ivalue);
printf("factorial is : %d\n",ino);
return 0;

}
unsigned long int factorial(int inum)
{
 unsigned long int iman=1;
int iret=0;

if(inum<0)
{
inum=-inum;
}

for(iret=1;iret<=inum;iret++)
{
iman=iman*iret;
}
return iman;
}
