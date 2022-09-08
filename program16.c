
#include<stdio.h>


void display(int );

int main()
{
  int ivalue=0;
  printf("enter number\n");
  scanf("%d\n",&ivalue);
 

   display(ivalue);
   return 0;
}

void display(int inum)
{
  int ino=0;
if(inum==0)
{
printf("you have enered value is 0\n");
}
if(inum<0)
{
inum=-inum;
}

 for(ino=inum;ino>=0;ino--)
{
  printf("%d\n",ino);
 }

}
