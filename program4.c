#include<stdio.h>
void display(int ino)
{
int icnt=0;
for(icnt=0;icnt<ino;icnt++)
{
printf("*\t");
}

}
int main()
{ 
int ivalue=0;
printf("enter number\n");
scanf("%d\n",&ivalue);
display(ivalue);
 return 0;
}