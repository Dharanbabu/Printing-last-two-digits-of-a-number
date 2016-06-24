#include<stdio.h>
#include<conio.h>
int rev(int q);
void main()
{
long int q,num=0;
clrscr();
printf("Enter the number:");
scanf("%d",&q);
num=rev(q);
num=rev(num);
printf("%d",num);
getch();
}
int rev(int q)
{
long int r=0,num=0;
if(q>1)
{
for(int i=0;i<2;i++)
{
r=q%10;
num=num+r;
num=num*10;
q=q/10;
}
}
else
return 0;
return num/10;
}
