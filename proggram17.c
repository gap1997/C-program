
#include<stdio.h>
int addition(int );

int main()
{
 int ino=0,iadd=0;

printf("Enter number\n");
scanf("%d\n",&ino);


iadd=addition(ino);
printf("addition is :%d\n",iadd);

return 0;
}

int addition(int ivalue)
{
int inum=0;
int itag=0;

for(inum=0;inum<=ivalue;inum++)
{
itag=itag+inum;
}
return itag;
}