#include<stdio.h>

void display(int);

int main()
{
int ino=0;

printf("enter number\n");
scanf("%d\n",&ino);

display(ino);
 return 0;
}

void display(int ivalue)
{
int a=0;
for(a=1;a<=ivalue;a++)
{
printf("%d",a);
}
}
