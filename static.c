#include<stdio.h>
void fun()
{
auto int i=10;
i++;
printf("value of i forn fun is :%d\n",i);
}
void gun()
{
static int j=15;
j++;
printf("value of  j form gun is :%d\n",j);
}

int main()
{
printf("inside main\n");
fun();
fun();
fun();
gun();
gun();
gun();

return 0;
}