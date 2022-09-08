#include<stdio.h>

void display();

int main()
{
display();
return 0;
}

void display()
{
int c=0;
for(c=100;c>=1;c--)
{
printf("%d\n",c);
}
}