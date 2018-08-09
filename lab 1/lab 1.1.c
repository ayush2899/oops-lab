#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,q;
printf("enter no i=");
scanf("%d",&i);
printf("enter no. for j=");
scanf("%d",&j);
q=i%j;
q=q+i-1;
printf("%d",q);
getch();
}
