#include<stdio.h>
void main()
{
int a;
sprintf("Enter a");
scanf("%d",&a);
if(a>0)
printf("Positive");
else if(a<0)
printf("Negative");
else
printf("zero");
}
